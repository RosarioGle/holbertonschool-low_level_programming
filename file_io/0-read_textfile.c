#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: the name of the file
 * @letters: the number of letters it should read and pirnt
 *
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int book, read_book, num;
	char *buffer;

	if (filename == NULL)
		return (0);
	book = open(filename, O_RDONLY);
	if (book < 0)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	read_book = read(book, buffer, letters);
	if (read_book < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[read_book] = '\0';
	close(book);
	num = write(STDOUT_FILENO, buffer, read_book);
	if (num < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (num);
}
