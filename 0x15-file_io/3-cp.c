#include "main.h"

/**
 * _size - creates a buffer for the size of 1024
 * @x: the file to be used
 * Return: returns to pointer of the buffer
 */
char *_size(char *x)
{
	char *copy;

	copy = malloc(sizeof(char) * 1024);

	if (copy == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n",
			x);
		exit(99);
	}

	return (copy);
}

/**
 * _close - closes a file
 * @x: file descriptor
 */
void _close(int x)
{
	int y;

	y = close(x);

	if (y == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", x);
		exit(100);
	}
}

/**
 * main - entry point
 * @argc: amount of arguments
 * @argv: list of all arguments
 * Return: returns 0 on success
 */
int main(int argc, char *argv[])
{
	int source, dest, _read, _write;
	char *copy;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy = _size(argv[2]);
	source = open(argv[1], O_RDONLY);
	_read = read(source, copy, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (_read > 0)
	{
		if (source  == -1 || _read == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(copy);
			exit(98);
		}

		_write = write(dest, copy, _read);
		if (dest == -1 || _write == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(copy);
			exit(99);
		}
		_read = read(source, copy, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(copy);
	_close(source);
	_close(dest);
	return (0);
}
