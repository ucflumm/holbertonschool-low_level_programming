/**
* _isalpha - checks if it is alphanumeric
**/
#include "main.h"

#define ASCII_LOWER_A 97
#define ASCII_LOWER_Z 122
#define ASCII_UPPER_A 65
#define ASCII_UPPER_Z 90
#define ASCII_DIGIT_0 48
#define ASCII_DIGIT_9 57

int _isalpha(int c)
{
	
	if (c >= ASCII_LOWER_A && c <= ASCII_LOWER_Z)
		return (1);
	
	if (c >= ASCII_UPPER_A && c <= ASCII_UPPER_Z)
		return (1);
	
	if (c >= ASCII_DIGIT_0 && c <= ASCII_DIGIT_9)
		return (1);
		
	return(0);
}