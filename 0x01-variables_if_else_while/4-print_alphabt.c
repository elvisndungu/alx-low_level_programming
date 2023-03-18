#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all alphabets in uppercase then lowercase
 * Return: 0 if all GG
 *
 */

int main(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');

	return (0);
}
