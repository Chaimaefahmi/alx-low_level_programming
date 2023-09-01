#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: long int
 */
void print_binary(unsigned long int n)
{
	int i, num = 0;
	unsigned long int binary;

	for (i = 63; i >= 0; i--)
	{
		binary = n >> i;

		if (binary & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
		{
			_putchar('0');
		}
	}
	if (!num)
	{
		_putchar('0');
	}
}
