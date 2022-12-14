#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: array size
 * @argv: array
 * Return: 0 success, 1 failure
 */

int main(int argc, char **argv)
{
	int add, i, j;

	add = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);

	}
	printf("%d\n", add);
	return (0);
}
