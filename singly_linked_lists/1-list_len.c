#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to head of list
 * Return: number of elements in a linked list_t list
*/

size_t list_len(const list_t *h)
{
	size_t count = 0;
	list_t *current;

	if (h == NULL)
		return (count);
	current = h->next;
	if (h->next == NULL)
	{
		count++;
		return (count);
	}
	if (h->str == NULL || current->str == NULL)
	{
		current = h->next;
		count++;
	}
	if (count == 0)
	{
		count++;
		if (h->next == NULL)
		return (count);
	}

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
