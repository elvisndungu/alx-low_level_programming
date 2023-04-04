#include "main.h"

/**
  * _memcpy - funct to copy memry
  * @dest: dest memry
  * @src: source memry 
  * @n: bytes from memory area to copy
  *
  * Return: memory area tht ends up replaced
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
