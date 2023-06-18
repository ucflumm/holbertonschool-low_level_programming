#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: a list of types of arguments passed to the function
 * Return: only if error
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, j = 0;
	char *str;

	va_start(ap, format);
	while (format && format[i])
	{
		switch (format[i++])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			str = va_arg(ap, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			break;
		default:
			j = 1;
			break;
		}
		if (format[i] && j == 0)
			printf(", ");
		j = 0;
	}
	printf("\n");
	va_end(ap);
}
