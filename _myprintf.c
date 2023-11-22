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

	if (format == NULL)
		return (-1);
	if (!(*format))
		return (count);
	va_start(mylist, format);
	while (*format != '\0')
	{
		if (*format != '%')
			count += _putchar(*format);
		else if (*format == '%')
		{
			format++;
			for (i = 0; check[i].type != '\0'; i++)
				if (*format == check[i].type)
					count += check[i].f(mylist);
		}
		format++;
	}
	va_end(mylist);
	return (count);
}
