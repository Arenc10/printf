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
void pr_char(va_list char_list);
void pr_int(va_list int_list);
void pr_float(va_list float_list);
void pr_string(va_list string_list);

#endif
