#include "main.h"

/**
 * search_type - to search the type
 * @format: the character to find
 * @mylist: my list of argument
 * Return: the number of characters printed
 */
int search_type(char format, va_list mylist)
{
	int i, count = 0;
	print_type check[] = {
		{'c', print_char}, {'s', print_string}, {'x', print_min_hexa},
		{'%', print_percent}, {'d', print_decimal}, {'o', print_octal},
		{'X', print_maj_hexa}, {'i', print_integer},
		{'u', print_unsigned}, {'\0', NULL}};

	for (i = 0; check[i].type != '\0'; i++)
		if (format == check[i].type)
		{
			count += check[i].f(mylist);
			break;
		}
	if (check[i].type == '\0')
		count += _putchar('%') + _putchar(format);
	return (count);
}
