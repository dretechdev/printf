#include "main.h"

/**
 * printf_out_hex - This handles hex conversion
 * @val: This is the parameter passed
 * Return: Return the counter
 */

int printf_out_hex(va_list val)
{
	int i, counter = 0;
	int *array;
	unsigned int number = va_arg(val, unsigned int);
	unsigned int temporary = number;

	while (number / 16 != 0)
	{
		number /= 16;
		counter++;
	}
	counter++;
	array = malloc(sizeof(int) * counter);
	for (i = 0; i < counter; i++)
	{
		array[i] = temporary % 16;
		temporary /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 0)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
