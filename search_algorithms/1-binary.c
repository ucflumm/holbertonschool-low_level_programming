#include "search_algos.h"

static int avg_ceil(int a, int b);
/**
* binary_search - searches for a value in a sorted array of integers using
* Binary search algorithm
* @array: pointer to array
* @size: size of array
* @value: value to search for
* Return: index where value is located
*/

int binary_search(int *array, size_t size, int value)
{
	int left, right;
	int middle = 0;

	left = 0;
	right = (int)size - 1;


	while (left != right)
	{
		middle = avg_ceil(left, right);
		if (array[middle] > value)
			right = middle - 1;
		else
			left = middle;
	}

	if (array[left] == value)
		return (left);
	return (-1);
}

/**
 * avg_ceil - calculates the average of two numbers and rounds up
 * @a: first number
 * @b: second number
 * Return: average of a and b rounded up
 */

static int avg_ceil(int a, int b)
{
	int result;

	result = (a + b) / 2;
	if ((a + b) % 2 != 0)
		result = result + 1;

	return (result);
}
