#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * identifierToPrint - print a character
 * @next: character after the %
 * @arg: argument in the identifier
 * Return: characters printed
 * except the NULL byte
 */

int identifierToPrint(char next, va_list arg)
{
	int i;

	identifierStruct funs[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_int},
		{"i", print_int},
		{"u", print_unsigned},
		{"b", print_unsignedToBinary},
		{"o", print_oct},
		{"x", print_hex},
		{"X", print_HEX},
		{"S", print_STR},
		{NULL, NULL}
	};

	for (i = 0; funs[i].identifier != NULL; i++)
	{
		if (funs[i].identifier[0] == next)
			return (funs[i].printer(arg));
	}
	return (0);
}
/**
 * _printf - do the same fuctionalities as printf from stdio
 * Description: print all format
 * @format: string character
 *
 * Return: number of printed character exept null byet
 * -1 if error
 */
int _printf(const char *format, ...)
{
	unsigned int i;
	int identifier = 0, character = 0;
	va_list list;

	va_start(list, format);

	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			character++;
			continue;
		}
		if (format[i + 1] == '%')
		{
			_putchar('%');
			character++;
			i++;
			continue;
		}
		if (format[i + 1] == '\0')
			return (-1);

		identifier = identifierToPrint(format[i + 1], list);
		if (identifier == -1 || identifier != 0)
			i++;
		if (identifier > 0)
			character += identifier;
		if (identifier == 0)
		{
			_putchar('%');
			character++;
		}
	}
	va_end(list);
	return (character);
}

