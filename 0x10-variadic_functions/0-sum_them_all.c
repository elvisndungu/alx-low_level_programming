#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - gets numebers of any param and sum
 * 
 * Return: sum or 0 if nah
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;
	va_list args;


	if (n == 0)
		return 0;
	
	va_start(args, n);


	for(i = 0; i < n; i++)
	{
		int x = va_arg(args, int);
		sum =+ x;
	}

	va_end(args);
	return sum;
}
