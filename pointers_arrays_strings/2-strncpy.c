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
	int i, cnt;
	char *rtn_string;

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
		{
			for (i = 0; i < n; i++)
			{
				if (*src == '\0')
				{
					for (cnt = i; i < n; cnt++)
					{
						*dest = '\0';
						src++;
						dest++;
					}
					return (rtn_string);
				}
				else
				{
					*dest = *src;
					dest++;
					src++;
				}
			}
		}
	}
	return (rtn_string);

}