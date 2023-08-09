#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"




/**
 * print_list - prints the list
 * @h: pointer to head of list
 *
 *
*/
size_t print_list(const list_t *h)
{
    size_t count = 0;
    list_t *current;
    
    current = (*h).next;
    if (h->str != NULL)
        printf("[%d] %s\n", h->len, h->str);
    else
        printf("[0] (nil)\n");
    count++;

    
    do {
        printf("[%d] %s!\n", current->len, current->str);
        count++;
        if (current->next == NULL)
            return count;
        current = current->next;
    } while (current != NULL);
    
    return (99);
}
