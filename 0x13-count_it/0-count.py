#!/usr/bin/python3
""" function that queries the Reddit API,
    parses the title of all hot articles,
    and prints a sorted count of given keywords """
import requests


def count_words(subreddit, word_list, after='', dic={}):
    """function that queries the Reddit API """
    if len(dic) <= 0:
        for word in word_list:
            dic[word] = 0
    if after is None:
        word_list = [[key, value] for key, value in dic.items()]
        word_list = sorted(word_list, key=lambda x: (-x[1], x[0]))
        for word in word_list:
            if word[1]:
                print("{}: {}".format(word[0].lower(), word[1]))
        return None
    headers = {'User-Agent': 'pinguin'}
    res = requests.get(
        'https://www.reddit.com/r/{}/hot.json?after={}'.
        format(subreddit, after), headers=headers, allow_redirects=False)
    if res.status_code != 200:
        return None
    info = res.json()
    data1 = info.get('data')
    after = data1.get('after')
    chi = data1.get('children')
    for i in chi:
        title = i.get('data').get('title')
        lc = [letter.lower() for letter in title.split(' ')]
        for word in word_list:
            dic[word] += lc.count(word.lower())
    count_words(subreddit, word_list, after, dic)
