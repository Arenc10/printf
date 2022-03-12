#ifndef MAIN_H
#define MAIN_H
typedef struct print_data
{
	char *type;
	void (*print)(va_list arg_list);
} print_data;
#endif
