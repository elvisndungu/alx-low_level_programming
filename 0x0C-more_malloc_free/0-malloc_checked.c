#include "main.h"

/**
 * malloc_checked - allocates mem using malloc
 * @b: bytes allocated :)
 * Return: ptr
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
