#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: Pointer to the head of the ll.
 * Return: The address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head, *fast = head;
if (!head)
return (NULL);
while (slow && fast && slow->next)
{slow = slow->next;
fast = fast->next->next;
if (fast == slow)
{slow = head;
while (slow != fast)
{slow = slow->next;
fast = fast->next; }
return (fast); }}
return (NULL);
}
