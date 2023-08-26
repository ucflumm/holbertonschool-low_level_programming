#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * @head : first element of the list
 * @index : index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	/* Sanity checks */
	if (*head == NULL)
		return (-1);

	/* if the index is zero means deleting the head*/
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	/* Tranverses until -1 index or OOBounds return -1 */
	current = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}

	/* temp becomes node to be deleted */
	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
