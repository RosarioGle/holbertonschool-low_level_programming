#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: number of arguments
 * @argv: argument of pointer to strings
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int mult, num1, num2;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mult = num1 * num2;
		printf("%d\n", mult);
	}
	else
		printf("Error\n");
	return (0);
}
