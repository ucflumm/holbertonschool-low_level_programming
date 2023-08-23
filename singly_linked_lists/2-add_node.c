#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the head of the list
 * @str: string to be added to the list
 *
 * Return: address of the new element, or NULL if it failed
 */



list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;
    
    
    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);
    new_node->str = strdup(str);
    
    /** Special condition for first node*/
    if (*head == NULL)
    {
        new_node->next = NULL;
        *head = new_node;
        return (*head);
    }

    new_node->next = *head;
    *head = new_node;

    return (*head);
}