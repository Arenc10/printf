#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * _printf - A function that prints everything
 * @format: pointer to constant char
 * @...: Second operand other args
 * Return: Return an int or 0
 */
int _printf(const char *format, ...)
{
	va_list ag_list;
	int i, j, flag;
	int len = 0;
	print_data p_func[] = {
		{"s", pr_string},
		{"c", pr_char},
		{"i", pr_int},
		{"d", pr_decimal},
		{NULL, NULL}
	};

	va_start(ag_list, format);
	/**if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (0);
	*/
	if (format == NULL)
		return (0);
	if (format[0] == '%' && format[1] == '\0')
	{
		_putchar('%');
		return (0);
	}
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			j = 0;
			flag = 0;
			while (p_func[j].type != NULL)
			{
				if (format[i + 1] == p_func[j].type[0])
				{
					len = len + p_func[j].print(ag_list);
					flag = 1;
					i++;
				}
				j++;
			}
			if (flag == 0)
			{
				_putchar(format[i]);
				len = len + 1;
			}
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			i++;
			len = len + 1;
		}
		else
		{
			_putchar(format[i]);
			len = len + 1;
		}
		i++;
	}

	va_end(ag_list);

	return (len);
}
