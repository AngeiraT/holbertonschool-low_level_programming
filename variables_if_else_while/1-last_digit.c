#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Starting the execution
 *
 * Return: Always 0 (program will execute successfuly)
 */
int main(void)
{
	int n; 
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, last);
	else if (n < 6 && n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	return (0);
}
