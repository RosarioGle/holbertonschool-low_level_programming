#include <stdio.h>

/**
 * main - print all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0.
 */

int main(void)
{
int number;

for (number = '9'; number <= '0'; number++)
putchar(number);

putchar('\n');

return (0);
}
