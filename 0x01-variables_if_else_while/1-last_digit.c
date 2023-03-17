#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
	int nt;
	int ran;
	srand(time(0));
	ran = rand() - RAND_MAX / 2;
	/* your code goes there */
	nt = ran % 10;
	printf("Last digit of %d is %d and is ", ran, nt);
	if (nt != 0 && ran < 6 )
		puts("less than 6 and not 0\n");
	else if (ran == 0)
		puts("0\n");
	else if (nt > 5)
		puts("greater than 5\n");

	return (0);
}
