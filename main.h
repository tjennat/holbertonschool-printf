#ifndef __MAIN__H__
#define __MAIN__H__

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct type
{
	char type;
	int (*f)(va_list type_list);
} print_type;

int power(int a, int b);
int length(int number);
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list type_list);
int print_string(va_list type_list);
int print_percent(va_list type_list);
int print_decimal(va_list type_list);
int print_unsigned(va_list type_list);
int print_octal(va_list type_list);

#endif
