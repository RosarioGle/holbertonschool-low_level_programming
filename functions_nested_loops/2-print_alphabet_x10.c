#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet, in lowercase
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)

{
int repetition = 0;
char letter;

while (repetition < 10)
{
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
repetition++;
}
}
