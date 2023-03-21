#include "main.h"

/**
 * _islower - does as told
 * @c: gets random shit from 3-main.
 * Return: Always 0 if non smol letter
 */
int _islower(int c)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (c == ch)
		{
			return (1);
		}
		continue;
	}
	return (0);
}


