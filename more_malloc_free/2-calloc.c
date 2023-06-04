#include "main.h"

/**
 * _calloc - something the function
 * @nmemb: something the doing
 * @size: something the doing
 * 
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);  
	ptr = malloc (nmemb * size);
	if (ptr == NULL)
		return (NULL);
	
	for (i = 0; i < size; i++)
		ptr[i] = 0x00;
	
	return (ptr);
}