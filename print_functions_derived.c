#include "main.h"
#include <stdarg.h>
#include <stdlib.h>


int print_unsignedToBinary(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	unsigned int value;

	print_binary(num, &value);
	print_binary(num, &value);

	return (value);
}


int print_oct(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	unsigned int num2;
	char *octValue;
	int i, j, value = 0;

	if (num == 0)
		return (_putchar('0'));

	for (num2 = num; num2 != 0; j++)
	{
		num2 = num2 / 8;
	}
	octValue = malloc(j);
	if (!octValue)
		return (-1);

	for (i = j - 1; i >= 0; i--)
	{
		octValue[i] = num % 8 + '0';
		num = num / 8;
	}

	for (i = 0; i < j && octValue[i] == '0'; i++)
		;

	for (; i < j; i++)
	{
		_putchar(octValue[i]);
		value++;
	}
	free(octValue);

	return (value);

}

int print_unsignedToHex(unsigned int num, char _case)
{
	unsigned int num2;
	int i, j, rem, chars = 0;
	char *hexnumb;

	for (num2 = num; num2 != 0; chars++, num2 /= 16)
		;
	hexnumb = malloc(chars);

	for (i = 0; num != 0; i++)
	{
		rem = num % 16;
		if (rem < 10)
			hexnumb[i] = rem + '0';
		else
			hexnumb[i] = rem - 10 + _case;
		num = num / 16;
	}

	for (j = i - 1; j >= 0; j--)
		_putchar(hexnumb[j]);
	free(hexnumb);
	return (chars);
}
