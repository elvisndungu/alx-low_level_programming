#include "main.h"
/**
 * _strspn - get the len of a prefix substring.
 * @s: The null  str to be scanned
 * @accept: the null str containin the characters to match.
 *
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0, flag;
	char *start = accept;

	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				flag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = start;
		if (flag == 0)
			break;
	}
	return (count);
}