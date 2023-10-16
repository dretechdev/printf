#include "main.h"

/**
 * printf_out__string - This function prints out a string
 * @value: This is the argument passed
 *
 * Return: This function returns the length of the string
 */

int printf_out_string(va_list value)
{
	char *str;
	int i;
	int length;

	str = va_arg(value, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
}
