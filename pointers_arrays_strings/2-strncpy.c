#include "main.h"

/**
 * _strncpy - copies a string 
 * @dest: destination pointer
 * @src: source poinnter
 * @n: how much to copy
 * Return: pointer to destination string.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i, cnt, positive;
	char *rtn_string;
	
	positive = 0;
	rtn_string = dest;
	if (*src == '\0')
	{
		cnt = n;
		while (cnt != 0)
		{
			*dest = '\0';
			src++;
			dest++;
			cnt--;
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (positive == 1)
			{
				*dest = '\0';
				src++;
				dest++;
			}
			else
			{
				*dest = *src;
				dest++;
				src++;
				if (*src == '\0')
					positive = 1;
			}
		}
		
	}
	return (rtn_string);

}