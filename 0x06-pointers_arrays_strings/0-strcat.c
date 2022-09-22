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
	for (; *dest != '\0'; dest++)
	{
	}
	for (; *src != '\0'; src++)
	{
	}
	strcat(*dest, *src);
	return (dest);
}
