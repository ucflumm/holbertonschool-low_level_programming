#include "main.h"
#define ASCII_LOWER_A 97
#define ASCII_LOWER_Z 122
/* #define ASCII_UPPER_A 65 */
/* #define ASCII_UPPER_Z 90 */
/**
 * _isupper - returns 1 if upper 0 if lower
 * Return: 0 if lower 1 if upper
 **/

int _isupper(int c)
{
	if (c >= ASCII_LOWER_A && c <= ASCII_LOWER_Z)
		return (0);
	else
		return (1);
}
