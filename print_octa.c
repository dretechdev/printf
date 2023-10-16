#include "main.h"

/**
 * printf_out_octa - This handles octa conversion
 * @val: This is the parameter passed
 * Return: Return the counter
 */

int printf_out_octa(va_list val)
{
	int i, counter = 0;
	int *array;
	unsigned int number = va_arg(val, unsigned int);
	unsigned int temporary = number;

	while (number / 8 != 0)
	{
		number /= 8;
		counter++;
	}
	counter++;
	array = malloc(sizeof(int) * counter);
	for (i = 0; i < counter; i++)
	{
		array[i] = temporary % 8;
		temporary /= 8;
	}
	for (i = counter - 1; i >= 0; i--)
		_putchar(array[i] + '0');
	free(array);
	return (counter);
}
