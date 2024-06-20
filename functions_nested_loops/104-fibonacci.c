#include <stdio.h>

#define MAX 98
#define SPLIT 10000000000

/**
 * main - finds and prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long int a1 = 1, a2 = 0, b1 = 2, b2 = 0;
	unsigned long int c1, c2;
	int count;

	printf("%lu, %lu", a1, b1);
	for (count = 2; count < MAX; count++)
	{
		c1 = a1 + b1;
		c2 = a2 + b2;
		if (c2 >= SPLIT)
		{
			c1 += c2 / SPLIT;
			c2 = c2 % SPLIT;
		}
		printf(", %lu", c1);
		if (c2 > 0)
		{
			printf("%010lu", c2);
		}
		a1 = b1;
		a2 = b2;
		b1 = c1;
		b2 = c2;
	}
	printf("\n");
	return (0);
}
