#include "_putchar"
/**
 * main - main
 * Description: A program that prints putchar
 * Return: 0 success
 */

int main(void)
{
	char c[8]  = "_putchar";
	for( i = 0; i <= 7; i++)
	{
	_putchar(c[i]);
	_putchar('\n');
	}
	return 0;
}
