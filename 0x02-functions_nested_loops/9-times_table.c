#include "main.h"
/**
 * times_table  - prints the 9 times table
 *
 * Return: no return
 */
void times_table(void)
{
	int a, b, mt;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		for (b = 1; b <= 9; b++)
		{
			mt = a * b;
			_putchar(44);
			_putchar(32);
			if (mt <= 9)
			{
				_putchar(32);
				_putchar(mt + 48);
			}
			else
			{
				_putchar((mt / 10) + 48);
				_putchar((mt % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
