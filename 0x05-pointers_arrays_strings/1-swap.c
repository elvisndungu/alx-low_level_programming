#include "main.h"

/**
 * swap_int - swaps values
 * @a: pointer a
 * @b: pointer b
 * Return: void .... nada
 */

void swap_int(int *a, int *b)
{
	/* get temporally values of an b */
	int ta = *a;
	int tb = *b;

	*a = tb;
	*b = ta;
}
