#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
/**
 * struct print_data - structure for printing data
 * @type: type of format
 * @print: function for printing
 */
typedef struct print_data
{
	char *type;
	int (*print)(va_list arg_list);
} print_data;

int _putchar(char c);
int _printf(const char *format, ...);
int pr_char(va_list char_list);
int pr_int(va_list int_list);
int pr_decimal(va_list decimal_list);
int pr_string(va_list string_list);

#endif
