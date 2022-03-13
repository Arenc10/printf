#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...)
{
	va_list ag_list;
	int i, j;
	
	print_data p_func[] = {
		{"c", pr_char},
	};

	va_start(ag_list, format);
	p_func->print(ag_list);
	_putchar('\n');

	va_end(ag_list);

	return (0);
}
