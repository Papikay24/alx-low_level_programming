#include "main.h"

/**
 * print_alphabet_x10 - a function that prints the alphabet, 10 times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int n, m;

	m = 0;

	while (m < 10)
	{

		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		m++;	
		_putchar('\n');
	}
}

