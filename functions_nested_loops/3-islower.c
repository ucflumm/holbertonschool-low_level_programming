/**
* _islower - checks if char is lowercase
**/
#include "main.h"

#define ASCII_LOWER_A 97
#define ASCII_LOWER_Z 122

int _islower(int c)
{

	if (c >= ASCII_LOWER_A && c <= ASCII_LOWER_Z)
	{
		return (1);
	}

	return (0);
}
