#include "main.h"
/**
* _pow_recursion - find the x raised to the power of y
* @x: the integer
* @y: the power
* Return: return the int result
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
