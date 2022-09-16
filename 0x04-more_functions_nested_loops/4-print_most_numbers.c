#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - a function that prints most numbers apart from 2 and 4
 * @i: integer
 * Return: 0-9 except 2 and 4 followed by a new line
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i == 2) || (i == 4))
			continue;
		else
			_putchar(i + '0');
	}
	_putchar('\n');
}
