#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long int a = 1, b = 2, sum = 0, temp;

	while (a <= 4000000)
	{
		if (a % 2 == 0)
		{
			sum += a;
		}
		temp = a + b;
		a = b;
		b = temp;
	}
	printf("%lu\n", sum);
	return (0);
}
