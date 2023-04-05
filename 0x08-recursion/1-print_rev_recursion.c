#include "main.h"

/**
 * _print_rev_recursion - prints a str in reversee
 * @s: the address of memory to print
 *
 * Return: notin at all :)
 */

void _print_rev_recursion(char *s)
{
	/* if we're at the end of a string terminate */
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	/*
	 * when we reach the end of str it will
	 * return notin and allow the following code to run
	 */
	_putchar(*s);
}
