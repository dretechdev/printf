#include "main.h"

/**
 * _strlen - This function returns the length of a string always
 * @str: This is the pointer to a string
 *
 * Return: 1
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		;
	}
	return (i);
}

/**
 * _strlenl - Strlen function applicable for constant character
 * @str: This is the character pointer
 *
 * Return: 1
 */

int _strlenl(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		;
	}
	return (i);
}
