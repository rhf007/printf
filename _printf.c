#include "main.h"

/**
 * _printf - produce output according to a format
 * @format: output string
 * Return: no. of characters printed
 */
int _printf(const char *format, ...)
{
	int i, len = 0;
	va_list args;
	int (*func)(va_list);

	va_start(args, format);

	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == '\0')
		{
			return (-1);
		}
			/*len += checkSpecifier(format[i + 1], args, len), i++;*/

		if (format[i] == '%' && format[i + 1] != '\0')
		{
			func = get_spec_func(args);
			if (func == NULL)
			{
				_putchar(format[i]);
			}
			len += func(args);
			i++;
		}


		else
		{
			_putchar(format[i]);
			len++;
		}
	}
	va_end(args);
	return (len);
}
