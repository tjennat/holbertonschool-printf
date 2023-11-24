#ifndef __MAIN__H__
#define __MAIN__H__

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * struct type - type used on printf
 * @type: is the type can be char, string or percent
 * @f: is the pointer to the function that gonna recognize type
 */
typedef struct type
{
	char type;
	int (*f)(va_list type_list);
} print_type;

/**
 * struct hexa - type used on printf
 * @number: number
 * @hexa: hexadecimal
 */
typedef struct hexa
{
	int number;
	char hexa;
} _hexa;

int power(int a, int b);
int length(int number);
int length2(unsigned int number);
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list type_list);
int print_string(va_list type_list);
int print_percent(va_list type_list);
int print_decimal(va_list type_list);
int print_unsigned(va_list type_list);
int print_octal(va_list type_list);
int print_min_hexa(va_list type_list);
int print_maj_hexa(va_list type_list);

#endif
