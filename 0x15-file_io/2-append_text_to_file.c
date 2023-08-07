#include "main.h"

/**
 * append_text_to_file - adds text to the end of a file
 * @filename: name of the file
 * @text_content: content of the text
 * Return: returns -1 if fails else returns 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int _read, _write, x = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (; text_content[x]; x++)
		{
			;
		}
	}

	_read = open(filename, O_WRONLY | O_APPEND);
	_write = write(_read, text_content, x);

	if (_read == -1 || _write == -1)
	{
		return (-1);
	}

	close(_read);

	return (1);
}
