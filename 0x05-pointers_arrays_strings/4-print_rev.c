#include "main.h"
#include <string.h>

/**
 * print_rev - a function that prints strings in reverse
 * @s: character input
 */

void print_rev(char *s)
{
	int i;

	i = strlen(s) - 1;

	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}
