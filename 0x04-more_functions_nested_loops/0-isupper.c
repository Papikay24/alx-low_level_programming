#include "main.h"

/**
 * _isupper - a function that checks for uppercase letters
 *
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
