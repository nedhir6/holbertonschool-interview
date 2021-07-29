#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_node -  inserts a number into a sorted singly linked list.
 * @head: head of the list.
 * @number: number to insert.
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_node(listint_t **head, int number)
{
listint_t *new, *i = *head, *h = *head;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = number;
if (h == NULL || h->n > number)
{
new->next = *head;
*head = new;
return (new);
}
while (i->next)
{
if (i->next->n > number)
{
new->next = i->next;
i->next = new;
return (new);
}
i = i->next;
}
new->next = i->next;
i->next = new;
return (new);
}
