#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: a list of types of arguments passed to the function
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list mylist;
	int i, count = 0;
	print_type check[] = {
		{'c', print_char}, {'s', print_string},
		{'%', print_percent}, {'d', print_decimal},
		{'i', print_integer}, {'\0', NULL}};

	if ((format == NULL) || (format = ""))
		return (-1);
	va_start(mylist, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			_putchar(*format);
			count++;
			format++;
		}
		else
		{
			format++;
			i = 0;
			while (check[i].type != '\0')
			{
				if (*format == check[i].type)
					count += check[i].f(mylist);
				i++;
			}
			format++;
		}
	}
	va_end(mylist);
	return (count);
}
