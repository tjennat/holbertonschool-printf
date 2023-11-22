#include "main.h"

/**
 * print_integer - print an integer
 * @mylist: is the type we want to use
 * Return: the number of carater in a string
 */

int print_integer(va_list mylist)
{
	int number = va_arg(mylist, int);
	int aff_char = 0;
	int longueur = length(number);

	if (number > 0)
	{
		while (longueur > 0)
		{
			aff_char = (number / power(10, longueur - 1)) % 10;
			_putchar('0' + aff_char);
			longueur--;
		}
	}
	else if (number < 0)
	{
		_putchar('-');
		number *= (-1);
		while (longueur > 0)
		{
			aff_char = (number / power(10, longueur - 1)) % 10;
			_putchar('0' + aff_char);
			longueur--;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (length(number));
}

