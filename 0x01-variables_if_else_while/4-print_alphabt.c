#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
char letters;
for (letters = 'a'; letters <= 'z'; letters++)
{
if (letters == 'q' && letters == 'e')
{
continue;
}
else
{
putchar(letters);
}
putchar("\n");
return (0);
}

