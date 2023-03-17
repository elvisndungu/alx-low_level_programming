#include <stdlib.h>
#include <time.h>
/**
 * main - prints out last digit and some other tings
 * Return: 0 if success dammit
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_n = n % 10;

	if (last_n > 5)
		printf("Last digit of %d is %d and greater than 5\n", n, last_n);
	else if (last_n == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_n);
	else
		printf("Last digit of %d is %d is less than 6 and not 0\n", n, last_n);

	return (0);
}
