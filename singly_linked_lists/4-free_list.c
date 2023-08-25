#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 * 
 * 
*/

void free_list(list_t *head)
{
    list_t *current;
    list_t *next;

    /* point current pointer to head of list*/
    current = head;
    
    /** 
     * we need two pointers because when we free the current node,
     * we lose access to the next node
     * free the current nodes string and node
    */
    while (current != NULL)
    {
        next = current->next;
        free(current->str);
        free(current);
        current = next;
    }

}