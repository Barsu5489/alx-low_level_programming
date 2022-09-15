#include "main.h"

/**
 * print_most_numbers - func name
 */

void print_most_numbers(void)
{
int a = 0;
while (a <= 9)
{
if (a == 2 || a == 4)
	continue;
	_putchar(a);
	a++;
}
_putchar('\n');
}
