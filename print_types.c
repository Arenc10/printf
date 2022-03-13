#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

int pr_char(va_list char_list)
{
	char c;
	c = va_arg(char_list, int);
	_putchar(c);

	return (1);
}
int pr_string(va_list string_list)
{
	char *s;
	int i;
	s = va_arg(string_list, char*);
	if (s == NULL)
		s = "NULL";
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);

	return (i);
}
int pr_float(va_list float_list);
int pr_int(va_list int_list);
