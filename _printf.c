#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...)
{
	va_list ag_list;
	int i, j;
	
	print_data p_func[] = {
		{"c", pr_char},
		{"s", pr_string}
	};

	va_start(ag_list, format);
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		for (j = 0; j < 2 && format[i] != *p_func[j].type; j++)
		{
			if (j < 2)
			{
				p_func[j].print(ag_list);
			}
		}
	}
	_putchar('\n');

	va_end(ag_list);

	return (0);
}
