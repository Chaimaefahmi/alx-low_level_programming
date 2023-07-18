#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void);
{
	int coun;
	int lett;

	coun = 0;

	while (coun++ <= 9)
	{
		lett = 'a';
	while (lett <= 'z')
	{
		_putchar(lett);
		lett++;
	}
	_putchar('\n');
	coun++;
	}
}
