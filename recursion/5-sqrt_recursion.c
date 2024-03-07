#include "main.h"

/**
* operation - make the operation to find the root.
* @n:variable
* @root:variable
* Return: Always 0.
*/

int operation(int n, int root)
{
if (root * root == n)
return (root);
else if (root * root < n)
return (operation(n, root + 1));
else
return (-1);
}
