#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by a new line
 *
 * @separator: a pointer to a string to be printed between numbers
 * @n: number of integer passed to the function (4)
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(ap);
}
