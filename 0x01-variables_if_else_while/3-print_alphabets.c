#include <stdio.h>

int main(void)
{
	int uper;
	int lower;

	uper = 'A';
	lower = 'a';
	while (lower <= 'z')
	{
		puts(lower);
		lower++;
	}
	while (uper <= 'Z')
	{
		puts(uper);
		uper++;
	}
	puts('\n');
	return (0);
}
