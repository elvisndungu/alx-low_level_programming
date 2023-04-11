#include <stdio.h>

/**
 * main  - prints all arguments it recieves
 * @argc: gets count of arguments
 * @argv: array of cmd line arguments
 * Return: 0 nada
 */

int main(int argc, char *argv[])
{
	int num;

	(void)argv;
	num = argc - 1;
	printf("%d\n" , num);

	return (0);
}
