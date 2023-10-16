#include "main.h"

/**
 * _printf - This function is for printf
 * @format: This is the identifier to look for
 *
 * Return: An integer
 */

int _printf(const char *format, ...)
{
	match m[] = {
		{"%c", printf_out_character}, {"%s", printf_out_string}, {"%%", printf_out_percentage}, {"%d", printf_out_decimal}, {"%i", printf_out_integer}, {"%r", printf_out_reverse_string}, {"%R", printf_out_rot13}, {"%b", printf_out_binary}, {"%u", printf_out_unsigned}, {"%o", printf_out_octa}, {"%x", printf_out_hex}, {"%X", printf_out_HEX}, {"%S", printf_ex_string}, {"%p", printf_out_pointer}
	};

	va_list args;
	int i = 0, length = 0;
	int v;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] == '\0')
	{
		v = 13;
		while (v >= 0)
		{
			if (m[v].id[0] == format[i] && m[v].id[1] == format[i + 1])
			{
				length += m[v].f(args);
				i = i + 2;
				goto Here;
			}
			v--;
		}
		_putchar(format[i]);
		i++;
		length++;
	}
	va_end(args);
	return (length);
}
