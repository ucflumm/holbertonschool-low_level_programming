#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/** 
 * _atoi - convert first integer string to integer
 * @s: string to check.
 * 
 * 
*/

int _atoi(char *s)
{
	return((int)strtol(s, (char **)NULL, 10));
}