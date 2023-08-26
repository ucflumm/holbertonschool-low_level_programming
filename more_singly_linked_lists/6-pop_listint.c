#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to pointer to head of list
 * Return: data in deleted node
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	/* if the list is empty */
	if (*head == NULL)
		return (0);
	/* safely remove the node */
	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);

	return (n);
}
