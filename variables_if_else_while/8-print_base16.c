#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0
 */

int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	n = 97;
	while (n <= 102)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
