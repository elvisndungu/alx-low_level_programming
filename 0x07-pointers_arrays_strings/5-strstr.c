#include "main.h"
/**
 *_strstr-locates a substring
 *@haystack:string to check occurence of needle
 *@needle:string to be checked.
 *Return:Returns a pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
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
