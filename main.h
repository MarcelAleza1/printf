#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list arg);
int print_str(va_list arg);
/**
 * struct findIdentifierStruct - structure definition
 * @identifier: type
 * @printer: function to print
 */

typedef struct identifierStruct
{
	char *identifier;
	int (*printer)(va_list);
} identifierStruct;

#endif
