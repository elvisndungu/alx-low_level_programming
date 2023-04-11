#include <stdio.h>

/**
 * main  - prints name of program
 * @argc: gets count of arguments
 * @argv: array of cmd line arguments
 * Return: integer .... len of te string
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
