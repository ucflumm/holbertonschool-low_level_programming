#include "main.h"
#include <string.h>

/**
 * rev_string - reverses string
 * @s: pointer to string
 *
*/

void rev_string(char *s)
{
	char *end_ptr;
	char ch[strlen(s)];
	int str_length, i;

	str_length = strlen(s);
	str_length--;

	end_ptr = s + str_length;

	for (i = 0; i <= str_length; i++)
	{
		ch[i] = *end_ptr;
		end_ptr--;
	}
	for (i = 0; i <= str_length; i++)
	{
		*s = ch[i];
		s++;
	}
}
