#include "search.h"
/**
 * linear_skip - function that searches for
 * value in a sorted skip list of integers.
 * @list: pointer to head of skip list to search in.
 * @value: value to search for.
 * Return: pointer on the first node where value is located.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{ skiplist_t *actual, *n, *tmp;
if (list == 0)
return (NULL);
actual = list;
while (actual)
{ if (actual->express == NULL)
{ n = actual->express;
for (tmp = list; tmp; tmp = tmp->next)
{ if (tmp->next == NULL)
{ printf("Value found between indexes [%lu] and [%lu]\n", actual->index, tmp->index);
break; }}
break; }
if (actual->express->n >= value)
{ n = actual->express;
printf("Value checked at index [%lu] = [%d]\n", n->index, n->n);
printf("Value found between indexes [%lu] and [%lu]\n", actual->index, n->index);
break; }
actual = actual->express;
printf("Value checked at index [%lu] = [%d]\n", actual->index, actual->n); }
while (actual)
{ printf("Value checked at index [%lu] = [%d]\n", actual->index, actual->n);
if (actual->n == value)
return (actual);
actual = actual->next; }
return (NULL); }
