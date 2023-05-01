#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <ctype.h>

/** 
 * _atoi - convert first integer string to integer
 * @s: string to check.
 * 
 * 
*/

int _atoi(char *s)
{
    int n = 0;
	int neg = 0;
    while (*s < 48 || *s > 57)
	{
		/* printf("%c ", *s); */
		if (*s == '-')
			neg++;
		s++;
	}
	n = (*s - '0');
	s++;
	
	
	while (*s >= 48 && *s <= 57)
	{
		n *= 10;
		n += *s - '0';
		s++;
	}
	
	if (neg % 2 != 0 && neg != 0)
		n *= -1;		
	
	return (n);
}