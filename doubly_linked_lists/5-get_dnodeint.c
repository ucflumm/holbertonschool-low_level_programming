#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the head of the list
 * @index: index of the node, starting from 0
 * Return: the nth node of a dlistint_t linked list, or NULL if the node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0, len = 0;

	len = dlistint_len(head);
	if (index > len)
		return (NULL);
	while (count < index)
	{
		head = head->next;
		++count;
	}
	return (head);
}
