#include "main.h"

/**
 * print_rev - a function that prints strings in reverse
 * @s: character input
 * Return: Always 0
 */

void print_rev(char *s)
{
	int i;

	i = strlen(s) - 1;
	while (i >= 0);
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
