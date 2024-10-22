#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: character
 *
 * Return: 1 if it's a alphabetic character, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
