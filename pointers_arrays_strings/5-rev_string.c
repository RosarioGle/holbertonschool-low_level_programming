#include <stddef.h>

/**
 * rev_string - Reverses a string
 *
 * @s: Pointer to the string to be reversed.
 */

void rev_string(char *s)
{
	size_t length = 0;
	char *begin, *end, temp;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	s--;
	begin = s - length + 1;
	end = s;
	while (begin < end)
	{
		temp = *begin;
		*begin = *end;
		*end = temp;
		begin++;
		end--;
	}
}
