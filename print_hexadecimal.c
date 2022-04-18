#include "main.h"

int print_hex_base(va_list arg, char _case)
{
	unsigned int num = va_arg(arg, unsigned int);
	int chars;

	if (num == 0)
		return (_putchar('0'));

	chars = print_unsignedIntToHex(num, _case);

	return (chars);
}

int print_hex(va_list arg)
{

	return (print_hex_base(arg, 'a'));
}

int print_HEX(va_list arg)
{
	return (print_hex_base(arg, 'A'));
}
