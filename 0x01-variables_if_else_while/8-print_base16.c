#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 0; c < 16; c++)
{
	if (c < 10)
		putchar('0' + c);
	else
		putchar('a' + c - 10);
}
	putchar('\n');
	return (0);
}
