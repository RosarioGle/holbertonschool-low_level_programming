#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: the name of the file
 * @text_content: the content of the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a = 0, b, book;

	if (filename == NULL)
		return (-1);
	book = open(filename, O_WRONLY | O_APPEND);
	if (book < 0)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[a] != '\0')
			a++;
		b = write(book, text_content, a);
		if (b != a)
			return (-1);
	}
	close(book);
	return (1);
}
