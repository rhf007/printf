#include "main.h"

/**
 * checkSpecifier -check for specifier in string
 * @input: character to be checked
 * @args: list to check in
 * @len: length
 * Return: no of printed characters
 */
int checkSpecifier(char input, va_list args, int len)
{
	char c, *str;

	switch (input)
	{
		case'c':
			c = va_arg(args, int);
			_putchar(c);
			len++;
			break;
		case's':
			str = va_arg(args, char*);
			_puts(str);
			len += strlen(str);
			break;
		case'%':
			c = '%';
			_putchar(c);
			len++;
			break;
	}

	return (len);
}
