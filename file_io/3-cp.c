#include "main.h"

/**
 * main - copies the content of a file to another file
 *
 * @argc: the number of arguments passed to the program
 * @argv: the array of arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int book_read, book_write, rd, a, b;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	book_read = open(argv[1], O_RDONLY);
	if (book_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	book_write = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((rd = read(book_read, buffer, BUFSIZ)) > 0)
	{
		if (book_write < 0 || write(book_write, buffer, rd) != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(book_read);
			exit(99);
		}
	}
	if (rd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	a = close(book_read);
	b = close(book_write);
	if (a < 0 || b < 0)
	{
		if (a < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", book_read);
		if (b < 0)
			dprintf(STDERR_FILENO, "Error; Can't close fd %d\n", book_write);
		exit(100);
	}
	return (0);
}
