#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, len2;
	printf("------------------tesk2---------------");
	len = _printf("len %d\n", 565);
	len2 = printf("len %d\n", 565);
	printf("len %d\n", len);
	printf("len2 %d\n", len2);


	len = _printf("len %d\n", -565);
	len2 = printf("len %d\n", -565);
	printf("len %d\n", len);
	printf("len2 %d\n", len2);


	len = _printf("len %d\n", 0);
	len2 = printf("len %d\n", 0);
	printf("len %d\n", len);
	printf("len2 %d\n", len2);
	return 0;
    return (0);
}
