#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - a function that returns the length of a string
 * @s: character value
 * Return: length of a string
 */

int _strlen(char *s)
{
	int len;

	s = "My first strlen!";

	len = strlen(s);
	printf("%d\n", len);

	return (0);
}
