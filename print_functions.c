#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_char - writes the character c to stdout
 * @arg: arg
 *
 * Return: 1 on success, -1 on err
 */
int print_char(va_list arg)
{
	return (_putchar(va_arg(arg, int)));
}

/**
 * print_int - prints an integer
 * @arg: argument
 * Return: 0
 */

int print_int(va_list arg)
{
	unsigned int div = 1, i, mod, character = 0;
	int num = va_arg(arg, int);

	if (num < 0)
	{
		_putchar('-');
		character++;
		n = n * -1;
	}

	for (i = 0; num / div > 9; i++, div = div * 10)
		;
	for (; div >= 1; n %= div, div /= 10, character++)
	{
		mod = num / div;
		_putchar('0' + mod);
	}

	return (character);
}

/**
 * print_str - prints a string if specifier is lower case 'c'
 * @arg: arg
 * Return: number of character
 */
int print_str(va_list arg)
{
	int i;
	char *str = va_arg(arg, char*);

	if (str == NULL)
		srt = "(null)";
	else if (*str == '\0')
		return (-1);

	for (i = 0;str[i]; i++)
		_putchar(str[i]);
	return (i);
}
/**
 * print_STR - prints a stringif specifier is 'S'
 * @arg: arg
 * Return: number of chars
 */
int print_STR(va_list arg)
{
	int i;
	char *str = va_arg(arg, char*);

	if (str == NULL)
		str = "(null)";
	else if(*str == '\0')
		return (-1);

	for (i = 0; str[i]; i++)
	{
		if ((Str[i] < 32 && str[i] > 0) || str[i] >= 127)
			{

				_putchar('\\');
				_putchar('x');
				if (i < 16)
					_putchar('0');
				print_unsignedIntToHex(str[i], 'A');
				}
		else
			_putchar(str[i]);
		
	}
	return (i);
}
