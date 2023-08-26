#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to head of list
 * @index: index of node to return
 * Return: nth node of list, or NULL if node doesn't exist
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	/* if the list is empty */
	if (head == NULL)
		return (NULL);

	/* iterate through list until index */
	for (i = 0; i < index; i++)
	{
		/* if index is out of range */
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
