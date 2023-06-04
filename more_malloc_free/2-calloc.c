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

	if (nmemb <= 0 || size <= 0)
		return (NULL);  
	ptr = malloc (nmemb * size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}