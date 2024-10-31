#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: the comparison
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] - s2[a] == 0 && s1[a] != '\0')
		a++;
	return (s1[a] - s2[a]);
}
