#include "main.h"

/**
 * create_file - creates a file with content
 * @filename: name of the file
 * @text_content: content to be enterd in the file
 * Return: returns -1 if an error, else returns 1
 */
int create_file(const char *filename, char *text_content)
{
	int _read, _write, x = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (x = 0; text_content[x]; x++)
		{
			;
		}
	}

	_read = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	_write = write(_read, text_content, x);

	if (_read == -1 || _write == -1)
	{
		return (-1);
	}

	close(_read);

	return (1);
}
