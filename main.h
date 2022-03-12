#ifndef MAIN_H
#define MAIN_H
/**
 * struct print_data - structure for printing data
 * @type: type of format
 * @print: function for printing
 */
typedef struct print_data
{
	char *type;
	void (*print)(va_list arg_list);
} print_data;

int _putchar(char c);
int _printf(const char *format, ...);

#endif
