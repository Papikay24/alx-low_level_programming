#include "main.h"
#include <stdio.h>

/**
 * *_strcat - a function that concatenates two strings
 * @dest: character input
 * @src: character input
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
