#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: big haystack
 * @needle: needle to find in haystack
 * Return: destination pointer
 *
*/

char *_strstr(char *haystack, char *needle)
{
	register char *a, *b;

    /**
     * First scan quickly through the two strings looking for a
     * single-character match.  When it's found, then compare the
     * rest of the substring.
     */

	b = needle;
	if (*b == 0)
	{
		return (haystack);
	}
	for ( ; *haystack != 0; haystack += 1)
	{
		if (*haystack != *b)
		{
			continue;
		}
		a = haystack;
		while (1)
		{
			if (*b == 0)
			{
				return (haystack);
			}
			if (*a++ != *b++)
			{
				break;
			}
		}
		b = needle;
	}
	return (NULL);
}
