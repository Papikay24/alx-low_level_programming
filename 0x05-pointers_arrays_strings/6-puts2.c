#include "main.h"
#include <string.h>

/**
 * puts2 - a function that prints every other character of a string
 * @str: string input
 */

void puts2(char *str)
{
	int i, len;

	len = strlen(str);

	for (i = 0; i <= len; i++)
	{
		printf("%c", str[i]);
	}
	putchar('\n');

}
