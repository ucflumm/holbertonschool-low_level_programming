#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	listint_t *current;

	if (h == NULL)
	return (count);

	printf("%d\n", h->n);
	count++;
	current = h->next;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}

	return (count);
}
