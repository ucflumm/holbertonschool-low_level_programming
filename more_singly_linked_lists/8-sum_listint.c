#include "lists.h"
/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head: pointer to the head of the list
 * Return: sum of all the data (n) of a listint_t linked list.
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	/* Sanity checks */
	if (head == NULL)
		return (0);

	/* Traverse the list */
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
