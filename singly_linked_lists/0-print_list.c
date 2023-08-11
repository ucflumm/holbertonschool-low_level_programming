#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"




/**
 * print_list - prints the list
 * @h: pointer to head of list
 * Return: size of elements
 *
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;
	list_t *current;
	char *safeString = NULL;

	current = h->next;
	if (h->next == NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		count++;
		return (count);
	}
	if (h->str == NULL || current->str == NULL)
	{
		printf("[0] (nil)\n");
		current = h->next;
		count++;
	}
	if (count == 0)
	{
		safeString = strndup(h->str, h->len);
		printf("[%d] %s\n", h->len, safeString);
		free(safeString);
		count++;
		if (h->next == NULL)
			return (count);
	}

	while (current != NULL)
	{
		safeString = strndup(current->str, current->len);
		printf("[%d] %s\n", current->len, safeString);
		count++;
		current = current->next;
		free(safeString);
	}
	return (count);

}
