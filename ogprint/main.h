#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int checkSpecifier(char input, va_list args, int len);
#endif /* MAIN_H */
