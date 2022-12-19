#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * REturn: Always 0.
 */
int main(void)
{
	char s[10] = "My School";

	printf("%s\n", s);
	re_string (s);
	printf("%s\n", s);
	return (0);
}
