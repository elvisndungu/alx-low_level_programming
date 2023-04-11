#include <stdio.h>
#include <stdlib.h>

/**
 * isInt - checks if s is an integer
 * @s: string to check
 * Return: 0 or 1
 */

int isInt(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

/**
 * main - adds positive numbers
 * @argc: gets count of arguments
 * @argv: array of cmd line arguments
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	int sum = 0;

	while (--argc)

	{
		if (isInt(argv[argc]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[argc]);
	}
	printf("%i\n", sum);
	return (0);
}
