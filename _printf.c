#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * _printf - produces output according to a format
 * @format: string
 * @...: takes multiple arguments
 * Return: tne number of character printed
 */

int _printf(const char *format, ...)
{
	char *str, c;
	int i = 0, leng;

	va_list(list);

	if (format == NULL)
		return (-1);
	va_start(list, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			i++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
				write(1, format, 1);
				i++;
			else if (*format == 'c')
				c = va_arg(list, int);
				write(1, &c, 1);
				i++;
			else if (*format == 's')
				str = va_arg(list, char*);
				leng = 0;
				while (str[leng] != '\0')
					leng++;
				write(1, str, leng);
				i += leng;
		}
		format++;
	}
	va_end(list);
	return (i);
}
