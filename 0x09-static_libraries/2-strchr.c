#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string parameter
 * @c: character to search for
 * Return: pointer to the first occurence of c else 0
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}
	if (*s== c)
	{
		return (s);
	}
	return (0);
}
