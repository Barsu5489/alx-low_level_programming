#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Entry
 *
 * Return: Always 0 (success)
 */

int main(void)
{
char alpa = 'a';
srand(time(0));
n = rand() - RAND_MAX / 2;
while (alpha <= 'z')
{
putchar(alpha);
alpha = toupper(alpha);
putchar(alpha);
alpha++;
}
return (0);
}
