#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: First  formal parameter
 * @y: Second formal parameter
 *
 * Description: This function will return the value of x  raised to the power of y
 * Returns: x ^ y if y > 0
 * else returns -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}

	return (x * (_pow_recursion(x, (y - 1))));
}
