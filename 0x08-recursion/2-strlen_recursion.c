#include "main.h"

/**
 * _strlen_recursion - finds out the len of str
 * @s: the str to get to count :D
 *
 * Return: an integer :>
 */
 
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
	/* If we have reached the end of the str
	* then return nada, notin
	*
	*/

	return;
	}

	/* add 1 to count this string and another 1 to the string
	* so we can shift to the right
	*/

	return 1 + _strlen_recursion(s + 1);
}
