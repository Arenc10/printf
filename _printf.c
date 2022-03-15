#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...)
{
	va_list ag_list;
	int i, j;
	print_data p_func[] = {
		{"s", pr_string},
		{"c", pr_char},
		{"i", pr_int},
		{"d", pr_decimal}
	};

	va_start(ag_list, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4 && (format[i] != *p_func[j].type))
			j++;
		if (j < 4)
			p_func[j].print(ag_list);
		i++;
	}
	_putchar('\n');

	va_end(ag_list);

	return (0);
}
