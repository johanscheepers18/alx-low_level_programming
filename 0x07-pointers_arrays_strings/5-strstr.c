#include "main.h"

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			return (haystack);
			needle++;
		}

		haystack++;
	}

	return ('\0');
}
