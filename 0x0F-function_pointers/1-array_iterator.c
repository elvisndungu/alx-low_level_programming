#include <stdlib.h>
#include <stdio.h>
/**
 * array_iterator - executes a function given as a parameter
 *
 * @array: to iterate
 * @size: size of array
 * @action: function parm
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
