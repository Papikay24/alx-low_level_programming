#include "main.h"

/**
 * print_rev - a function that prints strings in reverse
 * @s: character input
 * Return: Always 0
 */

void print_rev(char *s)
{
	strrev(s);
	printf("%s\n", s);
}
