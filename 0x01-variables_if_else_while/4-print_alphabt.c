#include <stdio.h>

int main(void)
{
	int start;

	start = 'a';
	while (start <= 'z')
	{
		if (start != 'q' && start != 'e' )
			puts(start);
		start++;
	}
	puts('\n');

	return (0);
}
