#include "main.h"
#include <stdio.h>

/**
* _atoi - Converts a string to an integer
* @s:variable
* Return: Values or 0
*/

int _atoi(char *s)
{
int neg_pos = 1;
unsigned int n = 0;
do {
if (*s == '-')
neg_pos *= -1;
else if (*s >= '0' && *s <= '9')
n = (n * 10) + (*s - '0');
else if (n > 0)
break;
} while (*s++);
return (n *neg_pos);
}

/**
* main - prints all arguments it receives
* @argc:variable
* @argv:variable
* Return: Always 0.
*/

int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
int res, mul1, mul2;
mul1 = _atoi(argv[1]);
mul2 = _atoi(argv[2]);
res = mul1 *mul2;
printf("%d\n", res);
return (0);
}
}
