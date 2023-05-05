#include "main.h"
#include <string.h>
#define M_ENCODE_LEN 10
/**
 * leet - encode string to leet 
 * @str: string to encode
 * Return: pointer to string
 * 
*/
char *leet(char *str)
{
	char * const rtn_tmp = str;
	char matrix_encode[M_ENCODE_LEN][M_ENCODE_LEN] = {
		{'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'},
		{'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'}
	};
	int n, len;

	
	while (*str != '\0')
	{
		for (n = 0; n < M_ENCODE_LEN; n++)
		{
			if (*str == matrix_encode[0][n])
			{
				*str = matrix_encode[1][n];
				n = M_ENCODE_LEN;
			}
		}
		str++;
	}
	return (rtn_tmp);
}
