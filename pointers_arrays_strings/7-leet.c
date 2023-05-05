#include "main.h"
#include <string.h>
/**
 * leet - encode string to leet 
 * @str: string to encode
 * Return: pointer to string
 * 
*/
char *leet(char *str)
{
	char *rtn_tmp, *ret, *origin, *casecheck;
	int counter = 0;
	int len;
	char leet_complete[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char leet_arr_a[] = {'a', 'A'};
	char leet_a = '4';
	char leet_arr_e[] = {'e', 'E'};
	char leet_e = '3';	
	char leet_arr_o[] = {'o', 'O'};
	char leet_o = '0';
	char leet_arr_t[] = {'t', 'T'};
	char leet_t = '7';
	char leet_arr_l[] = {'l', 'L'};
	char leet_l = '1';

	rtn_tmp = str;
	origin = str;
	len = strlen(str);
	while (strpbrk(str, leet_complete))
	{
		for (counter = 0; counter < len; counter ++)
		{
			
		}
	}
	return (rtn_tmp);
}
