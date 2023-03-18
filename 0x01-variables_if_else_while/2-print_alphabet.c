#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all alphabets in lowercase
 * Return: 0 if all GG
 *
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch < 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
