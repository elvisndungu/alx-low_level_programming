#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - calls function to print name
 *
 * @name:name to print
 * @f:function name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	(*f)(name);
}
