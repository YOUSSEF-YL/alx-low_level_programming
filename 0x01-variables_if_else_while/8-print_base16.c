#include <stdio.h>

int main(void)
{
	int start;
	int zero;

	start = 'a';
	zero = 0;
	while (zero <= 9)
	{
		puts(zero + '0');
		zero++;
	}
	while (start <= 'f')
	{
		putchar(start);
		start++;
	}
	putchar('\n');

	return (0);
}
