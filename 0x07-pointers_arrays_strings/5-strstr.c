#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: str to check occurence of needle
 * @needle: str  to be checked.
 * Return: pointer to the beginning of the located
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *i = haystack;
		char *j = needle;

		while (*haystack && *j && *haystack == *j)
		{
			haystack++;
			j++;
		}

		if (!*j)
			return (i);

		haystack = i + 1;
	}
	return ('\0');
}
