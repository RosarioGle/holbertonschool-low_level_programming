#include <stdio.h>

/**
 * main - prints its name
 *
 * @argc: number of arguments
 * @argv: argument of pointer to strings
 *
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
