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
int checkSpecifier(char input, va_list args, int len);

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct spec
{
    char *spec;
    int (*f)(va_list args);
}spec;

/*int print_char(va_list args);
int print_str(va_list args);
int print_num(va_list args);
int print_%(va_list args);*/

int (*get_spec_func(char c))(va_list args);
#endif/*MAIN_H*/
