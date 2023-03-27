#include "main.h"

/**
 * _puts - prints string followed by new line
 * @str: pointer a
 * Return: void .... nada
 */

void print_rev(char *s)
{
	char *str = s;
	int i;
	int len;

	len = strlen(str);

	for (i = (len-1); i >= 0; i--)
	{
		putchar(str[i]);
	}


}
