#include "main.h"

/**
 * *_strncat - a function that concatenates two strings
 * @dest: character input
 * @src: character input
 * @n: integer input
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}

	for (b = 0; b < n; b++)
	{
		dest[a + b] = src[b];
		if (src[b] == '\0')
			b = n;
	}

	return (dest);
}
