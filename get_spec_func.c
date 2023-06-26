#include "main.h"

/**
 * get_spec_func - get function for each specifier
 * @c: specifier
 * Return: pointer to suitable function
 */
int (*get_spec_func(char c))(va_list args)
{
	int i;
	spec specifier[] = {
		{"c", print_char},
		{"s", print_str},
		/*{"d", print_num},*/
		/*{"i", print_num},*/
		/*{"o", print_num},*/
		/*{"b", print_num},*/
		/*{"x", print_num},*/
		/*{"X", print_num},*/
		{"%", print_p},
		{NULL, NULL}
	};

	for (i = 0; spec[i].spec != '\0'; i++)
	{
		if (spec[i].spec[0] == c)
		{
			return (spec[i].f);
		}
	}

	return (NULL);
}
