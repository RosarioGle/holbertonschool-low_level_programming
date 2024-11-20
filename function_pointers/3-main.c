#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * @argc: the numbers of arguments
 * @argv: the arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*o)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	o = get_op_func(argv[2]);
	if (o == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", o(num1, num2));
	return (0);
}
