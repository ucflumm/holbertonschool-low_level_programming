#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to head of list
 * @n: integer to be included in new node
 * Return: address of new element or NULL if failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	if (head == NULL)
	return (NULL);

	/* Allocate space for new node*/
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	/* Special condition for first node */
	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}

	/* Traverse the list to get to the last node */
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	new_node->next = NULL;

	return (new_node);
}
