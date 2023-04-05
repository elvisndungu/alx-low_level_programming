#include "main.h"

/**
 * _puts_recursion - prints a str then a new line
 * @s: the address of memory to print
 *
 * Return: notin at all :)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
