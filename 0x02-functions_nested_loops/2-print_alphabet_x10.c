#include "main.h"

/**
 * print_alphabet_x10 - a function that prints the alphabet, 10 times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n * 10);
	}
	_putchar('\n');

	return (0);
}

