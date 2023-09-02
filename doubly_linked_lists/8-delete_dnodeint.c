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
 * delete_dnodeint_at_index - deletes the node at index index of a
 * @head: pointer to the head of the list
 * @index: index of the node that should be deleted, starting at 0
 * Return: 1 if it succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = NULL, *current = NULL;
	unsigned int count = 0, len = 0;

	if (*head == NULL)
		return (-1);
	len = dlistint_len(*head);
	if (index > len)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	current = *head;
	while (count < index)
	{
		current = current->next;
		++count;
	}
	temp = current;
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(temp);
	return (1);
}
