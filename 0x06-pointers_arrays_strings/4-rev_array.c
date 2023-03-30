#include "main.h"

/**
 *reverse_array - reverses the content of an array
 *@a: the array to reverse
 *@n: the size of the array
 *Return: nothing void
 */

void	reverse_array(int *a, int n)
{
	int i;
	int tmp;

	i = 0;
	n--;
	while (i < n)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		i++;
		n--;
	}
}
