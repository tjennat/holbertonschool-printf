#include "main.h"

/**
 * length2 - print the length of number
 * @number: my number
 * Return: the length
 */

int length2(unsigned int number)
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
 * print_unsigned - print an unsigned integer
 * @type_list: is the type we want to use
 * Return: the number of character in a string
 */

int print_unsigned(va_list type_list)
{
	unsigned int unsigned_spe;
	int count = 0, aff_char;
	int longueur;

	unsigned_spe = va_arg(type_list, unsigned int);
	if (unsigned_spe == 0)
		count += _putchar('0');
	longueur = length2(unsigned_spe);
	while (longueur > 0)
	{
		aff_char = (unsigned_spe / power(10, longueur - 1)) % 10;
		count += _putchar('0' + aff_char);
		longueur--;
	}
	return (count);

}

/**
 * print_octal - print an unsigned octal
 * @type_list: is the type we want to use
 * Return: the number of character in a string
 */

int print_octal(va_list type_list)
{
	unsigned int unsigned_oct;
	int count, *aff_char;
	int longueur, tmp;

	unsigned_oct = va_arg(type_list, unsigned int);
	tmp = longueur = length2(unsigned_oct);
	aff_char = malloc(sizeof(int) * (longueur + 10));
	if (aff_char == NULL)
		return (-1);
	while (longueur > (-1))
	{
		aff_char[longueur] = (unsigned_oct % 8);
		unsigned_oct /= 8;
		longueur--;
	}
	for (count = 0; count <= tmp ; count++)
		_putchar(aff_char[count] + '0');
	free(aff_char);
	return (count);
}
