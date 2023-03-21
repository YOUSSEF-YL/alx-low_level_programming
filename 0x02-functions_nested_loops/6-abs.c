#include <stdio.h>
#include "main.h"

/**
 * _abs - print _abs
 * @r: variable integer
 * Return: 0 (SUCCESS)
 */
int _abs(int r)
{
	if (r < 0)
		return (r * -1);
	return (r);
}