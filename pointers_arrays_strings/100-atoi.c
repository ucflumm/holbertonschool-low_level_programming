#include "main.h"

/** 
 * _atoi - convert first integer string to integer
 * @s: string to check.
 * 
 * 
*/

int _atoi(char *s)
{
    int sign = 1, base = 0;
     
    /* if whitespaces then ignore. */
    while (*s == ' ')
    {
        s++;
    }
     
    /* sign of number */
    while (*s == '-' || *s == '+')
	{
		if (*s == '-')
    	{
        	sign *= -1;
			s++;
    	}
		else
		{
			if (*s == '+')
			{
				sign *= 1;
				s++;
			}
		}
	}
    //ascii table and iteration loop needed	
	base = 10 * base + (*s - '0');
    return (base * sign);
}