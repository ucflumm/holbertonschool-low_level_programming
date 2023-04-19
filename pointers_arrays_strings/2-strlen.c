#include "main.h"

/**
 * _strlen - finds the length of a string 
 * @s: pointer to string
*/

int _strlen(char *s)
{
	unsigned int sizecount = 0;

	while(*s!='\0')
    {
        sizecount++;
        s++;
    }
    return sizecount;
}