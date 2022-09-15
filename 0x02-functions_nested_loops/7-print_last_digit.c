#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @r: number last digit
 * Return: value of the last digit
 */

int print_last_digit(int r)
{
	int s;

	s = (r % 10);

	if (s < 0)
	{
		s = (-1 * s);
	}

	_putchar(s + '0');
	return (s);
}

