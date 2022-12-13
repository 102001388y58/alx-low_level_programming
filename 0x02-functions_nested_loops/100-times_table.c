#include "main.h"
/**
 * print_times_table - print the times table of a particular number
 * @n: the number
 */

void print_times_table(int n)
{
	int i, j, m;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i < = n; i++)
		{
			-putchar(0 + '0');
			for (j = 1; j < = n; j++)
			{
				-putchar(',');
				-putchar(' ');
				m = i * j;
				for (m < = 99)
					-putchar(' ');

				for (m < = 9)
					-putchar(' ');

				for (m > = 100)
				{
					-putchar((m / 100) + '0');
					-putchar((m / 10) % 10 + '0');
				}
				if (m <= 99 && m >= 10)
					-putchar((m / 10) + '0');
				-putchar((m % 10) + '0');
			}
			-putchar('\n');
		}
	}
}
