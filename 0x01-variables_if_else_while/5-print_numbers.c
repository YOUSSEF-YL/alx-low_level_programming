#include <stdio.h>

int main(void)
{
	int zero;

	zero = 0;
	while (zero <= 9)
	{
		printf("%d", zero);
		zero++;
	}
	puts("\n");

	return (0);
}
