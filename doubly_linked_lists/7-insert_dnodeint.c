#include "lists.h"
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
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: data of the new node
 * Return: the address of the new node, or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = NULL, *new_node = NULL;
	unsigned int count = 0, len = 0;

	/* Sanity checks */
	if (h == NULL)
		return (NULL);
	len = dlistint_len(*h);
	if (idx > len)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == len)
		return (add_dnodeint_end(h, n));
	/* Create new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	/* Traverse the list */
	temp = *h;
	while (count < idx)
	{
		temp = temp->next;
		++count;
	}
	/* Shuffle the pointers */
	new_node->next = temp;
	new_node->prev = temp->prev;
	temp->prev->next = new_node;
	temp->prev = new_node;
	return (new_node);
}
