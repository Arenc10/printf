#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * pr_char - Function that prints a char
 * @char_list: First operand a va list
 * Return: Returns an int or 0
 */
int pr_char(va_list char_list)
{
	char c;

	c = va_arg(char_list, int);
	_putchar(c);

	return (1);
}
/**
 * pr_string - Function that printg string
 * @string_list: First operand a va list
 * Return: Returns an int or 0
 */
int pr_string(va_list string_list)
{
	char *s;
	int i;

	s = va_arg(string_list, char*);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);

	return (i);
}
/**
 * pr_decimal - Function that prints decimal numbers
 * @decimal_list: First operand a va list
 * Return: Returns an int or 0
 */
int pr_decimal(va_list decimal_list)
{
	int n = va_arg(decimal_list, int);
	int last = n % 10;
	int expo = 1;
	int i = 1;
	int num;
	int dig;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = num * -1;
		n = n * -1;
		last = last * -1;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			expo = expo * 10;
			num = num / 10;
		}
		num = n;
		while (expo > 0)
		{
			dig = num / expo;
			_putchar(dig + '0');
			num = num - (dig * expo);
			expo = expo / 10;
			i++;
		}
	}
	_putchar(last + '0');
	return (i);
}
/**
 * pr_int - Function that prints an integer
 * @int_list: First operand a va list
 * Return: Return an int or 0
 */
int pr_int(va_list int_list)
{
	int n = va_arg(int_list, int);
	int last = n % 10;
	int expo = 1;
	int i = 1;
	int num;
	int dig;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = num * -1;
		n = n * -1;
		last = last * -1;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			expo = expo * 10;
			num = num / 10;
		}
		num = n;
		while (expo > 0)
		{
			dig = num / expo;
			_putchar(dig + '0');
			num = num - (dig * expo);
			expo = expo / 10;
			i++;
		}
	}
	_putchar(last + '0');
	return (i);
}
