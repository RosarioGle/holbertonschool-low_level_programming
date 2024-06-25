#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int line, space, chara;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (line = 1; line <= size; line++)
	{
		for (space = line; space < size; space++)
		{
			_putchar(' ');
		}
		for (chara = 1; chara <= line; chara++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
