#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first int
 * @m: second int
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, num;
	unsigned long int bit;
	unsigned long int flip = n ^ m;

	num = 0;
	for (i = 63; i >= 0; i--)
	{
		bit = flip >> i;
		if (bit & 1)
		{
			num++;
		}
	}

	return (num);
}
