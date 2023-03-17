
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of the random
 * number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ran;

	srand(time(0));
	ran = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", ran, ran % 10);
	if (ran % 10 == 0)
		puts("and is 0\n");
	else if ( ran % 10 != 0 && ran % 10 < 6 )
		printf("and is less than 6 and not 0\n");
	else if (ran % 10 > 5)
		printf("and is greater than 5\n");
	return (0);
}
