#include "main.h"
#define ASCII_DIGIT_LOWER 48
#define ASCII_DIGIT_UPPER 57
/**
 * _isdidit - checks if int is a digit
 * @c: number to check
 * Return: 1 if digit 0 if not
 *
 */

int _isdigit(int c)
{
	if (c >= ASCII_DIGIT_LOWER && c <= ASCII_DIGIT_UPPER)
		return (1);
	else
		return (0);
}
