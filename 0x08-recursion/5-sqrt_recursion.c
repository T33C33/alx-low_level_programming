#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: formal parameter
 * @i: passed parameter
 *
 * Description: returns the natural square root of a number
 * Return: natural (n) ^ (1/2)
 */
int _sqrt_recursion_one(int n, int i);
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_one(n, 1));
}

/**
 * _sqrt_recursion_one - recursive function
 * @n: passed parameter
 * @i: initialized parameter to 1
 *
 * Description: offers recursive assistance to _sqrt_recursion
 * Return: natural sqrt of n or -1 if otherwise
 */
int _sqrt_recursion_one(int n, int i)
{
	if ((i * i) > n)
	{
		return (-1);
	}
	else if ((i * i) == n)
	{
		return (i);
	}
	return (_sqrt_recursion_one(n, i + 1));
}
