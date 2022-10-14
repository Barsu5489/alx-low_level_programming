#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string btwn numbers
 * @n: number of arguments
 * Return: Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);

	if(separator == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(args, int), i != (n - 1) ? separator : "");
	}

	va_end(args);
	putchar('\n');

}
