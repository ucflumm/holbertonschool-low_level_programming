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
	beezero (ptr, nmemb * size);
	return (ptr);

}

/**
 * beezero - something the function
 * @s: void pointer
 * @size: size to delete
 * 
*/

void beezero(void *s, size_t len)
{
	_memset (s, '\0', len);
}

#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to area
 * @b: byte to be filled
 * @n: number of bytes
 * Return: pointer to destination
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr;

	ptr = s;
	while (n-- > 0)
	{
		*ptr = b;
		ptr++;
	}
	return (s);
}
