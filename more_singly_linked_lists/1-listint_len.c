#include "lists.h"
/**
 * listint_len - prints all the elements of a listint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	listint_t *current;

	if (h == NULL)
		return (count);

	count++;
	current = h->next;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
