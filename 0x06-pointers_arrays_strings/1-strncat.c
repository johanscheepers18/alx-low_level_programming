#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int i, len1;
	
	len1 = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[len1] = src[i];
		len1++;
	}
	
	if (len1 < n)
	{
		dest[len1] = '\0';
	}

	return (dest);
}
