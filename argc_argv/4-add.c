#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 *
 * @argc: number of arguments
 * @argv: argument of pointer to strings
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int a, b;
	int add = 0;

	if (argc < 3)
	{
		printf("0\n");
		return (0);
	}
	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (isdigit(argv[a][b]))
			{
				continue;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[a]);
	}
	printf("%d\n", add);
	return (0);
}
