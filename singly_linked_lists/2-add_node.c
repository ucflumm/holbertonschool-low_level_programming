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
    
    #ifdef DEBUG
    printf(("START OF add_node= memory addr of head: %p\n"), (void *) head);
    printf(("START OF add_node= memory contents of head: %p\n"),(void *) &head);
    #endif
    /* malloc for struct and strdup allocs memory for the string?*/
    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);
    /* checking if what head points to is NULL??*/
    if (head == NULL)
    {
        new_node->next = NULL;
        new_node->str = strdup(str);
        #ifdef DEBUG
        printf("contents of FIRST new_node->str: %s\n", new_node->str);
        #endif
        *head = new_node;
    /* early return */
        return (*head);
    }
    /* assign new node->next to head before assigning head to current new node */
    new_node->next = (void *) &head;
    #ifdef DEBUG
        printf("contents of new_node->next: %p\n", (void *) new_node->next);
        printf("address of new_node struct: %p\n", (void *) new_node);
    #endif
    new_node->str = strdup(str);
    
    head = &new_node;
    #ifdef DEBUG
        printf("contents of head: %p\n", (void *) head);
    #endif
    return (*head);
}