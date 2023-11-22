#include "main.h"

/**
 * print_char - printing a char
 * @type_list: is the type we want to use
 * Return: num of char
 */
int print_char(va_list type_list)
{
	char character = va_arg(type_list, int);

	_putchar(character);
	return (1);
}
/**
 * print_string - printing a string
 * @type_list: is the type we want to use
 * Return: length of the string
 */
int print_string(va_list type_list)
{
	int i;
	char *string = va_arg(type_list, char *);

	if (string == NULL)
		string = "(null)";
	for (i = 0; string[i] != '\0'; i++)
		_putchar(string[i]);
	return (i);
}
/**
 * print_percent - printing a %
 * @type_list: is the type we want to use
 * Return: num of char
 */
int print_percent(__attribute__((unused)) va_list type_list)
{
	_putchar('%');
	return (1);
}

