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
	char *s;
	int i;
	s = va_arg(string_list, char*);
	
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
}
void pr_float(va_list float_list);
void pr_int(va_list int_list);
