#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>

int _putchar(char c);
void _puts(char *str);
int _printf(const char *format, ...);
/*int checkSpecifier(char input, va_list args, int len);*/

/**
 * struct spec - Struct op
 *
 * @z: The specifier
 * @f: The function associated
 */
typedef struct spec
{
	char *z;
	int (*f)(va_list args);
} spec;

int print_char(va_list args);
int print_str(va_list args);
int print_di(va_list args);
int print_p(va_list args);
char *convert(unsigned int num, int base);
int (*get_spec_func(const char *c))(va_list args);

#endif/*MAIN_H*/
