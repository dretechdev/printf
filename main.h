#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * format - The structure format
 * The structure takes in two members
 * The first member takes hold of the place holder
 * The second member is responsible for holding the
 * function associated with a placeholder
 */

typedef struct format
{
	char *id;
	int (*f)();
} match;

int printf_out_reverse_string(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);
int printf_out_character(va_list value);
int printf_out_string(va_list value);
int _strlenl(const char *str);
int _strlen(char *str);
int printf_out_percentage(void);
int printf_out_integer(va_list args);
int printf_out_decimal(va_list args);
int printf_out_binary(va_list val);
int printf_out_unsigned(va_list args);
int printf_out_octa(va_list val);
int printf_out_hex(va_list val);
int printf_out_HEX(va_list val);
int print_HEX_extra(unsigned int number);
int printf_ex_string(va_list val);
int printf_out_pointer(va_list val);
int print_hex_extra(unsigned long int number);
int printf_out_rot13(va_list val);

#endif
