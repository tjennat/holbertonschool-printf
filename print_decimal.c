#include "main.h"

/**
 * length - print the length of number
 * @number: my number
 * Return: the length
 */

int length(int number)
{
	int i = 0;

	while (number != 0)
	{
		number /= 10;
		i++;
	}
	return (i);
}

/**
 * power - prints power
 * @a: - int
 * @b: - int
 * My function
 * Return: Always a or 1 (Success)
 */

int power(int a, int b)
{
	int i;
	int j = a;

	if (b == 0)
		return (1);
	for (i = 1; i < b; i++)
	{
		a *= j;
	}
	return (a);
}

/**
 * print_decimal - print a decimal
 * @mylist: is the type we want to use
 * Return: the number of carater in a string
 */

int print_decimal(va_list mylist)
{
	unsigned int abs;
	int number = va_arg(mylist, int);
	int aff_char = 0, count = 0;
	int longueur = length(number);

	if (number == 0)
		count = _putchar('0');
	else if (number < 0)
	{
		count = _putchar('-');
		abs = number * (-1);
	}
	else if (number > 0)
		abs = number;
	while (longueur > 0)
	{
		aff_char = (abs / power(10, longueur - 1)) % 10;
		count += _putchar('0' + aff_char);
		longueur--;
	}
	return (count);
}

