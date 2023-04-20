#include "variadic_functions.h"

/**
 * sum_them_all - sun the all parametrs
 * @n : firsta parm
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int res = 0, n1 = n;
	va_list arg;

	if (n == 0)
		return (0);
	va_start(arg, n);
	while (n1--)
		res += va_arg(arg, unsigned int);
	va_end(arg);
	return (res);
}
