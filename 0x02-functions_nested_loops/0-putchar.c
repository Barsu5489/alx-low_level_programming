#include "main.h"
/**
 * main - main
 * Description: A program that prints putchar
 * Return: 0 success
 */

int main(void)
{
	int i;
	char c[8]  = "_putchar";
	for(i = 0; i <= 7; i++)
	{
	_putchar(c[i]);
	}
	putchar('\n');
	return 0;
}
