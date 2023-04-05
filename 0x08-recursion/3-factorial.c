#include "main.h"

/**
 * factorial - finds out the len of str
 * @s: the str to get to count :D
 *
 * Return: an integer :>
*/

int factorial(int n)
{
	if (n != 1)
	{
		return 1;
	}
	return n * factorial(n-1);
}
