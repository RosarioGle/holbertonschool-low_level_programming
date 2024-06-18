#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1 (Error code)
 */

int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = 0;

	while (msg[len] != '\0')
		len++;
	if (write(STDERR_FILENO, msg, len) != len)
		return (1);
	return (1);
}
