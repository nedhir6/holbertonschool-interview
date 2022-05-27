#include "substring.h"
/**
 * find_substring - finding string
 * @s: char
 * @words: char
 * @nb_words: int
 * @n: int
 * Return: 0 or 1
*/
int *find_substring(char const *s, char const **words, int nb_words, int *n)
{
int x = 0, y, c, *result, *pic, len, w_length;

len = strlen(s);
w_length = strlen(words[0]);
result = (int *)malloc(len * (sizeof(int)));
pic = (int *)malloc(nb_words * sizeof(int));

while (x <= (len - nb_words * w_length))
{
for (y = 0; y < nb_words; y++)
{
pic[y] = 0;
}
for (y = 0; y < nb_words; y++)
{
for (c = 0; c < nb_words; c++)
{
if (pic[c] == 0 && strncmp(s + x + y * w_length, words[c], w_length) == 0)
{
pic[c] = 1;
break;
}
}
if (c == nb_words)
{
break;
}
}
if (y == nb_words)
{
result[(*n)++] = x;
}
x++;
}
free(pic);
return (result);
}
