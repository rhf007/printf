#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{

    unsigned int ui;

  
    ui = (unsigned int) __INT32_MAX__ + 1024;


    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
	    return (0);
}