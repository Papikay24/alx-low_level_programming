#include "main.h"
#include <string.h>

/**
 * puts2 - a function that prints every other character of a string
 * @str: string input
 */

void puts2(char *str)
{
	char i;
	int len;

	len = strlen(str);

	for (i = 0; i <= len; 1++)
	{
		printf("%d", str[i]);
	}
	printf('\n');

}
