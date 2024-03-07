#include "main.h"

/**
* prime - make the operation.
* @n:variable
* @r:variable
* Return: 1 or 0.
*/

int prime(int n, int r)
{
if (n % r == 0)
return (0);
else if (r > n / 2)
return (1);
else
return (prime(n, r + 1));
}

/**
* is_prime_number - verify if n is a prime number or not.
* @n:variable
* Return: prime or 0.
*/

int is_prime_number(int n)
{
if (n < 2)
return (0);
return (prime(n, 2));
}
