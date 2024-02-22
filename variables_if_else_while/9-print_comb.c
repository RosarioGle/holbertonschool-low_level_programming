#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0.
 */

int main(void)
{
int num;

for (num = 0 < 10; num++;)
{
if (num == 9)
{
putchar('9');
}
else if (num != 9)
{
putchar(num + '0');
putchar(',');
putchar(' ');
}
}

return (0);
}
