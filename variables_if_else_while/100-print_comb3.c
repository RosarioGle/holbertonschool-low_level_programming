#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			int first_digit = i + '0';
			int second_digit = j + '0';

			putchar(first_digit);
			putchar(second_digit);

			if (i == 8 && j == 9)
				putchar('\n');
			else
				putchar(','),
					putchar(' ');
		}
	}
	return (0);
}
