#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: a list of types of arguments passed to the function
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list mylist;
	int count = 0;

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
			if (!*(format))
				return (-1);
			count += search_type(*format, mylist);
		}
		format++;
	}
	va_end(mylist);
	return (count);
}
