#include <main.h>
#include "_putchar.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		printf(*sh);
		sh++;
	}
	printf('\n');

	return (0);
}
