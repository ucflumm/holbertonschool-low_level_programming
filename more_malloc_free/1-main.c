#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;
    char *concat1;

    concat = string_nconcat("Best ", "School !!!", 6);
    concat1 = string_nconcat(NULL, "Hello", 0);
    printf("%s\n", concat);
    printf("%s\n", concat1);
    free(concat);
    free(concat1);
    return (0);
}