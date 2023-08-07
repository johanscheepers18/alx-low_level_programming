#include "main.h"

/**
 * read_textfil - prints the contents of a file
 * @filename: name of the file
 * @letters: the amount of letters that should be printed
 * Return: returns 0 if there is an error, else the word and amount printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t _read, _write;
	int file;
	char *copy;
	
	if (!filename && !letters)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		return (0);
	}

	copy = malloc(sizeof(char) * letters);
	if (!copy)
	{
		return (0);
	}

	_read = read(file, copy, letters);

	close(file);

	if (!_read)
	{
		_read = letters;
	}

	_write = write(STDOUT_FILENO, copy, _read);
	free(copy);

	if (_write < 0)
	{
		return (0);
	}

	return (_write);
}
