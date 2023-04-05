#include "main.h"

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: int
 * @i: int
 * Return: anoda int
 */

int _sqrt_recursion(int n, int i)
{
/* If n is negative, return -1, no cap */
if (n < 0)
return (-1);

/* Base case: if n is 0 or 1, return n straight up */
if (n == 0 || n == 1)
return (n);

/* If i*i is equal to n, return i - got that sqrt, homie! */
if (i * i == n)
return (i);

/* If i*i is less than n, increment i and try again - keep it pushin */
if (i * i < n)
return (_sqrt_recursion(n, i + 1));

/* If i*i is greater than n, return -1 - sorry bro, can't get that sqrt */
return (-1);
}
/**
 * _sqrt_recursion - returns the square root of a number
 * @n: integer
 * Return: integer
 */

int _sqrt_recursion(int n)
{
/* Let's get that sqrt :) */
return (_sqrt_recursion(n, 0));
}
