#include "main.h"

/**
 * checkSpecifier - Checks the specifier character and performs like printf.
 * @input: The specifier character to check.
 * @args: The va_list containing the variable arguments.
 * @len: The current length of the output string.
 *
 * Return: The updated length of the output string.
 */
int checkSpecifier(char *input, va_list args, int len)
{
	char charc, *str;

	switch (input)
	{
		case 'c':
			charc = va_arg(args, int);
			write(STDOUT_FILENO, &charc, 1);
			len++;
			break;
		case's':
			str = va_arg(args, char *);
			write(STDOUT_FILENO, str, strlen(str));
			len += strlen(str);
			break;
		case'%':
			charc = '%';
			write(STDOUT_FILENO, &charc, 1);
			len++;
			break;
	}

	return (len);
}
