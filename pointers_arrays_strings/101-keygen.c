#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password for the program 101-crackme
 *
 * Return: Always 0
 */

int main(void)
{
	int i, sum;
	char password[100];

	sum = 0;
	srand(time(NULL));
	for (i = 0; i < 100; i++)
	{
		password[i] = rand() % 78 + 48;
		sum += password[i];
		putchar(password[i]);
		if (sum >= 2772)
		{
			break;
		}
	}
	password[i] = 2772 - sum;
	putchar(password[i]);
	putchar('\n');
	return (0);
}
