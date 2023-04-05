#include "main.h"

/**
 * factorial - finds out the len of str
 * @n: the str to get to count :D
 *
 * Return: an integer :>
*/

int factorial(int n)
{
	if (n < 0)
	{
		/**
		 * hehe nice try
		 */

		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
