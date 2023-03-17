#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ran;

	srand(time(0));
	ran = rand() - RAND_MAX / 2;

	if (ran == 0)
		printf("%d is zero\n", ran);
	else if (ran < 0)
		printf("%d is negative\n", ran);
	else if (ran > 0)
		printf("%d is positive\n", ran);

	return (0);
}
