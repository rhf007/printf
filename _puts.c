#include "main.h"

/**
 * _puts - print string
 * @str: string to be printed
 * Return: string length
 */
int _puts(char *str)
{
	int i;

	while (*str != '\0')
	{
		_putchar(*str);
		i++, str++;
	}

	return (i);
}
