#include "lists.h"
#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer to the head of the list
 * Return: number of elements in the list
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		++count;
		h = h->next;
	}
	return (count);
}


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
