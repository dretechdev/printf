#include "main.h"

/**
 * printf_out_binary - This function converts int to binary
 * @val: This is the argument passed
 *
 * Return: This returns an integer
 */

int printf_out_binary(va_list val)
{
	int flag = 0;
	int count = 0;
	int i, a = 1, b;
	unsigned int number = va_arg(val, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & number);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
