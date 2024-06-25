#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */

int main(void)
{
	int numb;

	for (numb = 1; numb <= 100; numb++)
	{
		if (numb % 3 == 0 && numb % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (numb % 3 == 0)
		{
			printf("Fizz");
		}
		else if (numb % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", numb);
		}
		if (numb < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
