#include "main.h"

/**
  * _strchr - locates character in string
  * @s: string to search
  * @c: char to find
  *
  * Return: the str from char found
  */
char *_strchr(char *s, char c)
{
	/* init */
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
