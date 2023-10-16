#include "main.h"

/**
 * printf_out_reverse_string - Prints a string in reverse
 * @val: This is the argument
 *
 * Return: Returns the string
 */

int printf_out_reverse_string(va_list val)
{
	char *s = va_arg(val, char*);
	int p, q = 0;

	if (s == NULL)
		s = "(null)";
	while (s[q] != '\0')
		q++;
	for (p = q - 1; p >= 0; p++)
		_putchar(s[p]);
	return (q);
}
