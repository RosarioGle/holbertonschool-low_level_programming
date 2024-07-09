#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _is_digit - Checks if a string is composed only of digits
 *
 * @s: The string to check
 *
 * Return: 1 if the string is composed only of digits, 0 otherwise
 */

int _is_digit(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}

/**
 * _strlen - Returns the length of a string
 *
 * @s: The string to check
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}

/**
 * print_error - Prints "Error" followed by a new line and exits with status 98
 */

void print_error(void)
{
	char *error = "Error\n";

	while (*error)
		_putchar(*error++);
	exit(98);
}

/**
 * _calloc - Allocates memory for an array, using malloc
 *
 * @nmemb: Number of elements
 * @size: Size of each element
 *
 * Return: Pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}

/**
 * main - Multiplies two positive numbers
 *
 * @argc: The number of arguments
 * @argv: The arguments
 *
 * Return: 0 on success, 98 on failure
 */

int main(int argc, char *argv[])
{
	char *num1, *num2;
	int len1, len2, len, i, j, carry, n1, n2, *result;

	if (argc != 3)
		print_error();
	num1 = argv[1];
	num2 = argv[2];
	if (!_is_digit(num1) || !_is_digit(num2))
		print_error();
	len1 = _strlen(num1);
	len2 = _strlen(num2);
	len = len1 + len2;
	result = _calloc(len, sizeof(int));
	if (result == NULL)
		print_error();
	for (i = len1 - 1; i >= 0; i--)
	{
		n1 = num1[i] - '0';
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			carry += result[i + j + 1] + (n1 * n2);
			result[i + j + 1] = carry % 10;
			carry /= 10;
		}
		result[i + j + 1] += carry;
	}
	i = 0;
	while (i < len && result[i] == 0)
		i++;
	if (i == len)
		_putchar('0');
	while (i < len)
		_putchar(result[i++] + '0');
	_putchar('\n');
	free(result);
	return (0);
}
