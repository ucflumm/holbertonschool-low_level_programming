#include <stdio.h>

/**
 * 6-size - accepts no arguments
 *  - prints the size of various types on the computer
 * it is compiled and run on
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
/** function main -:
* prints the byte size of the selected types line by line 
*/
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long));
	printf("Size of a float: %d byte(s)\n", sizeof(float));

	return (0);
}
