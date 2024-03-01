#include "main.h"
#include <stdio.h>

/**
* reverse_array - reverse a string until n
*
* @a: pointer a
*
* @n: number of time
*/

void reverse_array(int *a, int n)
{
int i = 0;
int j = 0;
int p;
for (i = n - 1; i >= n / 2; i--)
{
p = a[i];
a[i] = a[j];
a[j] = p;
j++;
}
}
