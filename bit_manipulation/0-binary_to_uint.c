#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: converted number or 0 if b is NULL or there is a char that is not 0
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, len, dec;

	i = len = dec = 0;

	/* if b is null return 0 */
	if (b == NULL)
		return (0);

	/* check for non-binary characters */
	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}
	/* shift left by one and fill the last digit if one*/
	while (i < len)
	{
		dec <<= 1;
		if (b[i] == '1')
			dec += 1;
		i++;
	}
	return (dec);
}
