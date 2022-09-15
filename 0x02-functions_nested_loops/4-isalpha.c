#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character
 *@c: is a single letter input
 * Return: 1 if c is a letter, lowercase or uppercase, otherwise return 0
 */

int _isalpha(int c)
{
	if (c >= 'a' || c >= 'A')
		return (1);
	else
		return (0);
}
