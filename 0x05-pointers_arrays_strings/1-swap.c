#include "main.h"
#include <stdio.h>

/**
 * swap_int - a function that swaps the value of two integers
 * @a: integer value
 * @b: integer value
 * Return: swapped integer values
 */

void swap_int(int *a, int *b)
{
	a = *a;
	* a = *b;
	* b = a;
}
