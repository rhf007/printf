#include "main.h"

/**
 * print_char - print character
 * @args: checked string
 * Return: length
 */
int print_char(va_list args)
{
	int c = va_arg(args, int);

	_putchar (c);
	return (1);
}

/**
 * print_str - print string
 * @args: checked string
 * Return: length
 */
int print_str(va_list args)
{
	int len = 0;

	char *str = va_arg(args, char*);
	char *n = "(null)";

	if (str == NULL)
	{
		_puts(n);

		for (len = 0; n[len] != '\0'; len++)
		{
			;
		}
	}
	else
	{
		_puts(str);

		for (len = 0; str[len] != '\0'; len++)
		{
			;
		}
	}

	return (len);

}

/**
 * print_p - print percent sign
 * @args: checked string
 * Return: length
 */
int print_p(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}

/**
 * print_num - print number
 * @args: checked string
 * Return: length
 *
 * int print_num(va_list args)
 * {
 * }
 */

