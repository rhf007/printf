#include "main.h"
/**
 * _printf - It will act like printf when give it s c % specifier
 * @format: specifies the necessary operations
 * Return: printed characters length
 */
int _printf(const char *format, ...)
{
	int i = 0, len = 0;

	va_list args;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				return (-1);
			}
			len += checkSpecifier(format[i + 1], args, len);
			printf("lenlen%i",len);
			i++;
		}
		else
		{
			write(1, &format[i], 1);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}
