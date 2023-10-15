#include "main.h"

/**
 * put_char - printsi
 * @c: input
 * Return: 0
 */

int put_char(char c)
{
	return (write(1, &c, 1));
}

