#include "main.h"
#include <string.h>

/**
 * print_rev - prints string IN REVERSE
 * @s: pointer s
 * Return: void .... nada
 */

void print_rev(char *s)
{
	char *str = s;
	int i;
	int len;

	len = strlen(str);

	for (i = (len -  1); i >= 0; i--)
	{
		putchar(str[i]);
	}
	printf("\n");

}
