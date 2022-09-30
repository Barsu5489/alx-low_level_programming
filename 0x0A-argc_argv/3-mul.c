#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: count
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{

	if (argc < 2)
	{
		printf("Error");
		printf("\n");
		
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
