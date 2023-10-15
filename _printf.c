#include "main.h"
/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	unsigned int i, leng = 0, leng2 = 0;
	va_list list;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			put_char(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			put_char(va_arg(list, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			leng2 = put_c(va_arg(list, char *));
			i++;
			leng += (leng2 - 1);
		}
		else if (format[i + 1] == '%')
		{
			put_char('%');
		}

		leng += 1;
	}
	va_end(list);
	return (leng);
}
