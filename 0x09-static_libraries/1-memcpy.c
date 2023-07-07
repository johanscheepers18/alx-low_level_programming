#include "main.h"

/**
 * _memcpy - used to copy n charcters from src to dest
 * @dest: the destiantion fo the coppied items
 * @src: the src of the items to be coppied from
 * @n: the amount of items to be coppied from src to dest
 * Return: returns the final dest pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
