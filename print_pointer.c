#include "main.h"

/**
 * printf_out_pointer - This function prints out pointer
 * @val: This is the parameter passed
 *
 * Return: Return an integer
 */

int printf_out_pointer(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int i, b;

	p = va_arg(val, void *);
	if (s == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
			_putchar(s[i]);
		return (i);
	}
	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = print_hex_extra(a);
	return (b + 2);
}
