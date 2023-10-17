#include "main.h"

/**
 * print_hex_extra - This handles hex conversion
 * @number: This is the parameter passed
 * Return: Return the counter
 */

int print_hex_extra(unsigned long int number)
{
	long int i, counter = 0;

	long int *array;
	unsigned long int temporary = number;

	while (number / 16 != 0)
	{
		number /= 16;
		counter++;
	}
	counter++;
	array = malloc(sizeof(long int) * counter);
	for (i = 0; i < counter; i++)
	{
		array[i] = temporary % 16;
		temporary /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
