#include "main.h"
/* #define ASCII_LOWER_A 97 */
/*#define ASCII_LOWER_Z 122 */
#define ASCII_UPPER_A 65
#define ASCII_UPPER_Z 90
/**
 * _isupper - returns 1 if upper 0 if lower
 * @c: number?
 *Return: 0 if lower 1 if upper
 **/

int _isupper(int c)
{
	if (c >= ASCII_UPPER_A && c <= ASCII_UPPER_Z)
		return (1);
	else
		return (0);
}
