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

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list type_list);
int print_string(va_list type_list);
int print_percent(va_list type_list);
int print_decimal(va_list mylist);

#endif
