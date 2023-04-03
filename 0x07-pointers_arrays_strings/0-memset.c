#include "main.h"

/**
 * *_memset - concatenates two strings
 *
 * @s: The source of strings
 * @b: The b to replace s wit
 * @n: The number of b's that will be sent to us
 *
 * Return: pointer to the resulting string dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}

	return s;	

}
