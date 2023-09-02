#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the head of the list
 * @n: integer to add to the list
 * Return: address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *temp = NULL;

	/* Sanity checks */
	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/* new_node assignment and make temporary pointer for head */
	new_node->n = n;
	new_node->next = NULL;
	temp = *head;

	/* Shuffle the prev, next and head pointers */
	if (temp != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;
	}
	new_node->prev = temp;
	/* If its not the head pointer */
	if (temp != NULL)
		temp->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
