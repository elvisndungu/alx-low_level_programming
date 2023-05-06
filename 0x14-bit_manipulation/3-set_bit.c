#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: ptr to the int
 * @index: index to set the value of bit
 *
 * Return: 1 on success or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index > 63)
		return (-1);
	m = 1 << index;
	*n |= m;
	return (1);
}
