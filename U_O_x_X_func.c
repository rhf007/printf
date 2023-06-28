#include "main.h"

/**
 * print_oct - print converted argument to octal
 * @args: checked string
 * Return: length of printed chars
 */
int print_oct(va_list args)
{
	int len = 0, i, j = 0;
	char *counter;

	i = va_arg(args, int);

	_puts(convert(i, 8));
	counter = convert(i, 8);

	while (counter[j])
	{
		len++;
		j++;
	}
	return (len);
}


/**
 * print_HEXA - print converted argument to hex
 * @args: checked string
 * Return: length of printed chars
 */
int print_HEXA(va_list args)
{
	int len = 0, i, j = 0;
	char *counter;

	i = va_arg(args, int);

	_puts(convert(i, 16));
	counter = convert(i, 16);

	while (counter[j])
	{
		len++;
		j++;
	}
	return (len);
}


/**
 * print_hexa - print converted argument to hexa
 * @args: checked string
 * Return: length of printed chars
 */
int print_hexa(va_list args)
{
	int len = 0, i, j = 0;
	char *counter;

	i = va_arg(args, int);

	_puts(convert_hexa(i, 16));
	counter = convert_hexa(i, 16);

	while (counter[j])
	{
		len++;
		j++;
	}
	return (len);
}

/**
 * print_unsigned - print converted argument to Unsigned int
 * @args: checked string
 * Return: length of printed chars
 */
int print_unsigned(va_list args)
{
	unsigned int len = 0, i, j = 0;
	char *counter;

	i = va_arg(args, int);

	_puts(convert(i, 10));

	counter = convert(i, 10);

	while (counter[j])
	{
		len++;
		j++;
	}

	return (len);
}
