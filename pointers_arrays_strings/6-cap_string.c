#include "main.h"
#include <ctype.h>
#define ASC_LOWER_A 97
#define ASC_LOWER_Z 122
#define ASC_UPPER_A 65
#define ASC_UPPER_Z 90
#define CASE_SHIFT 32
/**
 * cap_string - capitalizes a string
 * @str: string to capitalize
 * Return: string.
 *
*/

char *cap_string(char *str)
{
	char *rtn_tmp;

	rtn_tmp = str;
	while (*str != '\0')
	{
		if (isupper(*str))
		{
			while (isalpha(*str) || *str == '-')
				str++;
		}
		else
		if (islower(*str))
		{
			*str -= CASE_SHIFT;
			while (isalpha(*str) || *str == '-')
				str++;
		}
		else
		if (*str == '-')
		{
			str++;
			while (isalpha(*str) || *str == '-')
				str++;
		}
		else
		if (isalnum(*str))
		{
			while (isalnum(*str) || *str == '-')
				str++;
		}
		else
		str++;
	}
	return (rtn_tmp);
}
