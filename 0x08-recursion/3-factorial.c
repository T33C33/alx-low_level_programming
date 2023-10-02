#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: Given number (formal parameter passed to functon)
 *
 * Description: a function that returns the factorial of a given number
 * Return: -1 if n is lower than 0
 * else returns factorial of given number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n == 0)
		{
			return (1);
		}
	}
	return (n * factorial(n - 1));
}

