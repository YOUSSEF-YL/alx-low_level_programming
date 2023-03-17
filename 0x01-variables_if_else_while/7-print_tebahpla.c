#include <stdio.h>

int main(void)
{
	int end;

	end = 'z';
	while (end >= 'a')
	{
		puts(end);
		end--;
	}
	putchar('\n');

	return (0);
}
