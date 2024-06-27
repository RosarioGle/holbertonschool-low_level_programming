#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long n = 612852475143;
	unsigned long i = 2;
	unsigned long largest_factor = 0;

	while (n != 1)
	{
		if (n % i == 0)
		{
			largest_factor = i;
			while (n % i == 0)
			{
				n /= i;
			}
		}
		i++;
	}
	printf("%lu\n", largest_factor);
	return (0);
}
