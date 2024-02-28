#include "main.h"
#include <stdio.h>

/**
* main - print the numbers from 1 to 100
*
* Return: Always 0.
*/

int main(void)
{
int n = 1;
while (n < 101)
{
if (((n % 3) == 0) && ((n % 5) == 0))
printf("FizzBuzz");
else if ((n % 3) == 0)
printf("Frizz");
else if ((n % 5) == 0)
printf("Buzz");
else
printf("%d", n);
if (n < 100)
putchar(' ');
n++;
}
putchar('\n');
return (0);
}
