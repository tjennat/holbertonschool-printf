#include "main.h"
/**
 * change_hexa - To change in hexadecimal
 * @number: an integer
 * Return: a char in hexadecimal
 */
char change_hexa(int number)
{
	int i;
	_hexa hex[] = {{0, '0'}, {1, '1'}, {2, '2'},
		{3, '3'}, {4, '4'}, {5, '5'},
		{6, '6'}, {7, '7'}, {8, '8'}, {9, '9'}, {10, 'a'},
		{11, 'b'}, {12, 'c'}, {13, 'd'}, {14, 'e'}, {15, 'f'}};

	for (i = 0; number != hex[i].number; i++)
		;
	return (hex[i].hexa);
}
/**
 * print_min_hexa - print a lowercase hexadecimal
 * @type_list: is the type we want to use
 * Return: the number of charater in a string
 */
int print_min_hexa(va_list type_list)
{
	unsigned int hexa;
	int longueur, i;
	int count = 0;
	char *aff_char;

	hexa = va_arg(type_list, unsigned int);
	if (hexa == 0)
		count = _putchar('0');
	longueur = length2(hexa);
	aff_char = calloc(sizeof(char), longueur);
	if (aff_char == NULL)
		return (-1);
	for (i = (longueur - 1); i >= 0 && hexa > 0; i--)
	{
		aff_char[i] = change_hexa(hexa % 16);
		hexa /= 16;
		count++;
	}
	for (i = 0; i < longueur; i++)
		if (aff_char[i] != '\0')
			_putchar(aff_char[i]);
	free(aff_char);
	return (count);
}
/**
 * print_maj_hexa - print a uppercase hexadecimal
 * @type_list: is the type we want to use
 * Return: the number of charater in a string
 */
int print_maj_hexa(va_list type_list)
{
	unsigned int hexa;
	int longueur, i;
	int count = 0;
	char *aff_char;

	hexa = va_arg(type_list, unsigned int);
	if (hexa == 0)
		count = _putchar('0');
	longueur = length2(hexa);
	aff_char = calloc(sizeof(char), longueur);
	if (aff_char == NULL)
		return (-1);
	for (i = (longueur - 1); i >= 0 && hexa > 0; i--)
	{
		aff_char[i] = change_hexa(hexa % 16);
		hexa /= 16;
		count++;
	}
	for (i = 0; i < longueur; i++)
		if (aff_char[i] != '\0')
			_putchar(aff_char[i] >= 'a' ? aff_char[i] - 32 : aff_char[i]);
	free(aff_char);
	return (count);
}
