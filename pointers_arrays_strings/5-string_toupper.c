#include "main.h"
#define ASC_LOWER_A 97
#define ASC_LOWER_Z 122
#define ASC_UPPER_A 65
#define ASC_UPPER_Z 90
#define CASE_SHIFT 32
/**
 * string_toupper - makes a string uppercase 
 * @str: string to check
 * Return: pointer to string
 * 
*/

char *string_toupper(char *str)
{
	char *tmp;
	
	tmp = str;
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
			*str -= CASE_SHIFT;
		str++;
	}
	return (tmp);
}