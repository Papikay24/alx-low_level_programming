#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - a function that takes a pointer to an int as parameter and 
 * updates the value it points to to 98
 * @n: integer value
 * return: updated pointer value of 98
 */

void reset_to_98(int *n)
{
	int n;

	n = 0;

	int *m = &n;

	printf("n=%p\n", m);

	*n = 98;
	printf("n=%d\n", m);

	return (0);
}
