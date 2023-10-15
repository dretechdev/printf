#include "main.h"

/**
 * put_c - prints
 * @s: pointer
 * Return: byte of the string
 */

int put_c(char *s)
{
	int i;

	if (s)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			put_char(s[i]);
		}
	}
	return (i);
}

