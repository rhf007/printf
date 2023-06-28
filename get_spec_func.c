#include "main.h"

/**
 * get_spec_func - get function for each specifier
 * @c: specifier
 * Return: pointer to suitable function
 */
int (*get_spec_func(const char *c))(va_list args)
{
	int i;
	spec specifier[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_di},
		{"i", print_di},
		{"o", print_oct},
		{"b", print_binary},
		{"u", print_unsigned},
		{"x", print_hexa},
		{"X", print_HEXA},
		{"%", print_p},
		{NULL, NULL}
	};

	for (i = 0; specifier[i].z; i++)
	{
		if (*c == specifier[i].z[0])
		{
			return (specifier[i].f);
		}
	}

	return (NULL);
}
