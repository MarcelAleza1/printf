#include "main.h"

/**
 * print_binary - print a umber in binary form
 * @n: number
 * @printed: value in binary
 */

void print_binary(unsigned int n, unsigned int *printed)
{
	if (n > 1)
	{
		*printed += 1;
		print_binary(n >> 1, printed);
	}
	_putchar((n & 1) + '0');
}
