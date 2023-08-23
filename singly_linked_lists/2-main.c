#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;
    #ifdef DEBUG
    printf(("START OF main = memory addr of head: %p\n"), (void *) &head);
    #endif

    head = NULL;
    add_node(&head, "Alexandro");
    printf(("START OF main = memory addr of head: %p\n"), (void *) head);
    printf("head->str: %s\n", head->str);
    add_node(&head, "Asaia");
    printf(("START OF main = memory addr of head: %p\n"), (void *) head);
    printf("head->str: %s\n", head->str);
    add_node(&head, "Augustin");
    printf(("START OF main = memory addr of head: %p\n"), (void *) head);
    printf("head->str: %s\n", head->str);
    add_node(&head, "Bennett");
    printf(("START OF main = memory addr of head: %p\n"), (void *) head);
    printf("head->str: %s\n", head->str);
    add_node(&head, "Bilal");
    printf(("START OF main = memory addr of head: %p\n"), (void *) head);
    printf("head->str: %s\n", head->str);
    add_node(&head, "Chandler");
    printf(("START OF main = memory addr of head: %p\n"), (void *) head);
    printf("head->str: %s\n", head->str);
    add_node(&head, "Damian");
    printf(("START OF main = memory addr of head: %p\n"), (void *) head);
    printf("head->str: %s\n", head->str);
    add_node(&head, "Daniel");
    printf(("START OF main = memory addr of head: %p\n"), (void *) head);
    printf("head->str: %s\n", head->str);
    add_node(&head, "Dora");
    printf(("START OF main = memory addr of head: %p\n"), (void *) head);
    printf("head->str: %s\n", head->str);
    add_node(&head, "Electra");
    printf(("START OF main = memory addr of head: %p\n"), (void *) head);
    printf("head->str: %s\n", head->str);
    add_node(&head, "Gloria");
    printf(("START OF main = memory addr of head: %p\n"), (void *) head);
    printf("head->str: %s\n", head->str);
    add_node(&head, "Joe");
    printf(("START OF main = memory addr of head: %p\n"), (void *) head);
    printf("head->str: %s\n", head->str);
    add_node(&head, "John");
    printf(("START OF main = memory addr of head: %p\n"), (void *) head);
    printf("head->str: %s\n", head->str);
    add_node(&head, "John");
    printf(("START OF main = memory addr of head: %p\n"), (void *) head);
    printf("head->str: %s\n", head->str);
    add_node(&head, "Josquin");
    printf(("START OF main = memory addr of head: %p\n"), (void *) head);
    printf("head->str: %s\n", head->str);
    add_node(&head, "Kris");
    printf(("START OF main = memory addr of head: %p\n"), (void *) head);
    printf("head->str: %s\n", head->str);
    add_node(&head, "Marine");
    printf(("START OF main = memory addr of head: %p\n"), (void *) head);
    printf("head->str: %s\n", head->str);
    add_node(&head, "Mason");
    printf(("START OF main = memory addr of head: %p\n"), (void *) head);
    printf("head->str: %s\n", head->str);
    add_node(&head, "Praylin");
    printf(("START OF main = memory addr of head: %p\n"), (void *) head);
    printf("head->str: %s\n", head->str);
    add_node(&head, "Rick");
    printf(("START OF main = memory addr of head: %p\n"), (void *) head);
    printf("head->str: %s\n", head->str);
    add_node(&head, "Rick");
    printf(("START OF main = memory addr of head: %p\n"), (void *) head);
    printf("head->str: %s\n", head->str);
    add_node(&head, "Rona");
    printf(("START OF main = memory addr of head: %p\n"), (void *) head);
    printf("head->str: %s\n", head->str);
    add_node(&head, "Siphan");
    printf(("START OF main = memory addr of head: %p\n"), (void *) head);
    printf("head->str: %s\n", head->str);
    add_node(&head, "Sravanthi");
    printf(("START OF main = memory addr of head: %p\n"), (void *) head);
    printf("head->str: %s\n", head->str);
    add_node(&head, "Steven");
    printf(("START OF main = memory addr of head: %p\n"), (void *) head);
    printf("head->str: %s\n", head->str);
    add_node(&head, "Tasneem");
    printf(("START OF main = memory addr of head: %p\n"), (void *) head);
    printf("head->str: %s\n", head->str);
    add_node(&head, "William");
    printf(("START OF main = memory addr of head: %p\n"), (void *) head);
    printf("head->str: %s\n", head->str);
    add_node(&head, "Zee");
    printf(("START OF main = memory addr of head: %p\n"), (void *) head);
    printf("head->str: %s\n", head->str);
    print_list(head);
    return (0);
}