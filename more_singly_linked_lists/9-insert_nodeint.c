#include "lists.h"
/**
 * listint_len - prints all the elements of a listint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	listint_t *current;

	if (h == NULL)
		return (count);

	count++;
	current = h->next;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node in the list
 * @idx: index of the list where the new node should be added
 * @n: value to be added to the new node
 * Return: address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i;

	/* if the list is empty */
	if (head == NULL)
		return (NULL);

	/* if idx is 0, add node to beginning of list */
	if (idx == 0)
		return (add_nodeint(head, n));

	/* if idx is greater than the number of nodes in list */
	if (idx > listint_len(*head))
		return (NULL);

	/* create new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	/* iterate through list until index index is -1 */
	temp = *head;
	for (i = 0; i < idx - 1; i++)
		temp = temp->next;

	/* insert new node */
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
