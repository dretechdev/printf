#include "main.h"

/**
 * printf_out_character - This function prints out a character
 * @value: This is the argument passed
 *
 * Return: 1 which signifies success
 */

int printf_out_character(va_list value)
{
	char string;

	string = va_arg(value, int);
	_putchar(string);
	return (1);
}
