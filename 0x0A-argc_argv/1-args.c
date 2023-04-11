#include <stdio.h>

/**
 * main  - prints all arguments it recieves
 * @argc: gets count of arguments
 * @argv: array of cmd line arguments
 * Return: 0 nada
 */

int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
