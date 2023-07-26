#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @src: cadena a copiar
 * @dest: destino de la cadena.
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n);
{
	int index = strlen(dest);
	int a = 0;

	while (a < n && *src)
	{
		dest[index + a] = *src;
		src++;
		a++;
	}
	dest[index + a] = '\0';
	return (dest);
}
