#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints all possible combinations of three digits
 *
 * Return: Always 0
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				int digit1 = i + '0';
				int digit2 = j + '0';
				int digit3 = k + '0';

				putchar(digit1);
				putchar(digit2);
				putchar(digit3);

				if (i != 7 || j != 8 || k != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
