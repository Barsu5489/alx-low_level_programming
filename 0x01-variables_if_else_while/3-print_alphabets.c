#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
/**
 * main -Entry
 *
 * Return: Always 0 (success)
 */

int main(void)
{
char alpha = 'a';
while (alpha <= 'z')
{
putchar(alpha);
alpha = toupper(alpha);
putchar(alpha);
alpha++;
}
return (0);
}
