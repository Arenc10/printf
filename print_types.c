#include "main.h"
#include <stdarg.h>

void pr_char(va_list char_list)
{
	char c;
	c = va_arg(char_list, int);
	_putchar(c);
}
void pr_string(va_list string_list)
{
	int i;
	char s;
	for (i = 0; string_list[i] != '\0'; i++)
	{
		s = va_arg(string_list[i]);
		_putchar(s);
	}
}
void pr_float(va_list float_list);
void pr_int(va_list int_list);
