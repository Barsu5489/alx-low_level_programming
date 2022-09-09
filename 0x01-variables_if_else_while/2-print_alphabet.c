#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
char character = 'a';
while (character <= 'z')
{
character = tolowercase(character);
putchar("%c\n", character);
character++;
}
return (0);
}
