#include "main.h"

/**
 * printf_out_integer - This function outputs integers
 * @args: This is the argument to be printed
 *
 * Return: The number of characters printed
 */

int printf_out_integer(va_list args)
{
	int n = va_arg(args, int);
	int number, end = n % 10, digit, exponential = 1;
	int i = 1;

	n = n / 10;
	number = n;

	if (end < 0)
	{
		_putchar('-');
		number = -number;
		n = -n;
		end = -end;
		i++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			exponential *= 10;
			number /= 10;
		}
		number = n;
		while (exponential > 0)
		{
			digit = number / exponential;
			_putchar(digit + '0');
			number = number - (digit * exponential);
			exponential /= 10;
			i++;
		}
	}
	_putchar(end + '0');

	return (i);
}

#include "main.h"

/**
 * printf_out_decimal - This function prints out decimal
 * @args: This is the argument we want to print out
 * Return: The number of characters that have been printed
 */

int printf_out_decimal(va_list args)
{
	int n = va_arg(args, int);
	int number, end = n % 10, digit, exponential = 1;
	int i = 1;

	n = n / 10;
	number = n;

	if (end < 0)
	{
		_putchar('-');
		number = -number;
		n = -n;
		end = -end;
		i++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			exponential *= 10;
			number /= 10;
		}
		number = n;
		while (exponential > 0)
		{
			digit = number / exponential;
			_putchar(digit + '0');
			number = number - (digit * exponential);
			exponential = exponential / 10;
			i++;
		}
	}
	_putchar(end + '0');

	return (i);
}
