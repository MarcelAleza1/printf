#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);

/**
 * struct findIdentifierStruct - structure definition
 * @identifier: type
 * @printer: function to print
 */

typedef strcut findIdentifierStruct
{
	char *identifier;
	int (*printer)(va_list);
} findIdentifierStruct;

#endif
