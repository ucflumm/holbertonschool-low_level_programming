#include "search_algos.h"

static int avg_floor(int a, int b);
static void print_array(int *array, size_t size);
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

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		print_array(array + left, right + 1 - left);
		middle = avg_floor(left, right);
		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}

	return (-1);
}

/**
 * avg_floor - calculates the average of two numbers and rounds up
 * @a: first number
 * @b: second number
 * Return: average of a and b rounded up
 */

static int avg_floor(int a, int b)
{
	int result;

	result = (a + b) / 2;
	return (result);
}

/**
 * print_array - prints an array
 * @array: pointer to array
 * @size: size of array
*/

static void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		if (size == 1)
		{
			printf("%d\n", array[i]);
			i = size;
		}
		else if (i != size - 1)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}
