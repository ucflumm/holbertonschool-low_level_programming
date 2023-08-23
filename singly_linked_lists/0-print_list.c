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

	if (h == NULL)
		return (count);

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		count++;
	}
	else
	{
		printf("[%d] %s\n", h->len, h->str);
		count++;
	}

	current = h->next;
	while (current != NULL)
	{
		printf("[%d] %s\n", current->len, current->str);
		count++;
		current = current->next;
	}

	return (count);

}
