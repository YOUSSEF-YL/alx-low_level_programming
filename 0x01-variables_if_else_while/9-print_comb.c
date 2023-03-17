#include <stdio.h>

int main(void)
{
	int zero;

	zero = 0;
	while (zero <= 9)
	{
		puts(zero + '0');
		if (zero != 9)
		{
			puts(',');
			puts(' ');
		}
		zero++;
	}
	puts('\n');
	return (0);
}
