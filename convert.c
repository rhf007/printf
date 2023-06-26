#include "main.h"
/**
 * convert - convert str to int
 * @base: base
 * @num: the number
 * Return: converted number
 *
 */

char *convert(unsigned int num, int base)
{
	static const char Representation[] = "0123456789ABCDEF";
	static const char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr = Representation[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
