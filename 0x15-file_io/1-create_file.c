#include "main.h"

/**
 * len - used to get the len of a string
 * @x: string to be used
 * Return: returns the length of a string else if there is no string return -1
 */
ssize_t len(const char *x)
{
	ssize_t y = 0;

	if (!y)
	{
		return (-1);
	}

	while (*x++)
	{
		y++;
	}

	return (y);
}

/**
 * create_file - creates a file with content
 * @filename: name of the file
 * @text_content: content to be enterd in the file
 * Return: returns -1 if an error, else returns 1
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t _write;
	int file;

	if (!filename)
	{
		return (-1);
	}

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (file < 0)
	{
		return (-1);
	}

	if (text_content)
	{
		_write = write(file, text_content, len(text_content));
	}

	close(file);

	if (_write < 0)
	{
		return (-1);
	}

	return (1);
}
