#include "main.h"
/**
 * binary_to_uint -  binary number to an unsigned int
 * @b: ptr to binary
 *
 * Return: the converted number or b
 * s
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0, i = 0;

	if (!b)
		return (0);
	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		val <<= 1;
		val += b[i] - '0';
		i++;
	}
	return (val);
}
