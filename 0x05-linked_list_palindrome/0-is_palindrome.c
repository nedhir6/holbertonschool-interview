#include <stdlib.h>
#include <stdio.h>

#include "lists.h"

/**
 * is_palindrome -  Checks if a singly linked list is a palindrome.
 * @head: Head of linked list to check
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
const listint_t *list = *head;
int *arr, size_list = 0, n = 0;
if (!list)
return (1);
while (list)
{
list = list->next;
size_list++;
}
arr = malloc(size_list *sizeof(int));
if (!arr)
return (0);
list = *head;
while (list)
{
arr[n] = list->n;
list = list->next;
n++;
}
for (n = 0; n < (size_list / 2); n++)
{
if (arr[n] != arr[size_list - n - 1])
return (0);
}
return (1);
}
