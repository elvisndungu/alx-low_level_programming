#include "main.h"

/**
 * print_sign - does as told
 * @n: gets a number to be evaluated
 * Return: Always 0 if non smol letter
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	return (0);
}
