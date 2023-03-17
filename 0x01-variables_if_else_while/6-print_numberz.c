#include <stdio.h>

int main(void)
{
	int zero;

	zero = 0;
	while (zero <= 9)
	{
		puts(zero + '0');
		zero++;
	}
	puts('\n');
	return (0);
}
