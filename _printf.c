#include "main.h"

/**
 * _printf - produce output according to a format
 * @format: output string
 * Return: no. of characters printed
 */
int _printf(const char *format, ...)
{
	int len = 0;
	va_list args;
	int (*func)(va_list);

	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && *(format + 1) != '%')
		{
			format++;
			func = get_spec_func(format);
			if (*(format) == '\0')
				return (-1);
			else if (func == NULL)
			{
				_putchar(*(format - 1));
				_putchar(*format);
				len += 2;
			}
			else
				len += func(args);
		}
		else if (*format == '%' && *(format + 1) == '%')
		{
			format++;
			_putchar('%');
			len++;
		}
		else
		{
			_putchar(*format);
			len++;
		}
		format++;
	}
	va_end(args);
	return (len);
}
