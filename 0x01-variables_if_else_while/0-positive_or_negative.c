#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
	int ran;

	srand(time(0));
	ran = rand() - RAND_MAX / 2;
	/* your code goes there */
	
	printf("%d ", ran);

	if (ran < 0)
		puts("is negative\n");
	else if (ran > 0)
		puts("is positive\n");
	else 
		puts("is zero\n");

	return (0);
}