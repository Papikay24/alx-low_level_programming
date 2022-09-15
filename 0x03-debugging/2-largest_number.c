#include "main.h"
#include <stdio.h>

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: Always 0 (Success)
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		largest = a;
		printf("%d\n", largest);
	}
	else if (b > a && a > c)
	{
		largest = b;
		printf("%d\n", largest);
	}
	else
	{
		largest = c;
		printf("%d\n", largest);
	}
	printf("%d\n", largest);

	return (0);
}
