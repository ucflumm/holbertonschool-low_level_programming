#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head of the list
 * @str: string to be added to the list
 *
 * Return: can be anything including NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node;

	/* Allocate space for new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/** Special condition for first node*/
	if (*head == NULL)
	{
		new_node->len = strlen(str);
		new_node->str = strdup(str);
		new_node->next = NULL;
		*head = new_node;
		return (*head);
	}

	/* Assign values for new node's members*/
	new_node->str = strdup(str);
	new_node->len = strlen(str);

	/* Allocate last_node to head and iterate through list*/
	last_node = *head;
	while (last_node->next != NULL)
	last_node = last_node->next;

	/* Assign last_node's next to new_node and new_node's next to NULL*/
	last_node->next = new_node;
	new_node->next = NULL;

	return (*head);
}
