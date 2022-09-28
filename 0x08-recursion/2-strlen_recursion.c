#include "main.h"

/**
 * _strlen_recursion - print strlen using recursion
 *
 * @s: parameter s
 *
 * Return: nothing
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
