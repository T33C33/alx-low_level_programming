#include "main.h"

/**
 * is_prime_number - checks prime number and returns appropriate value
 * @n: formal parameter
 * @i: collected parameter from is_prime_func
 *
 * Description: This function checks for prime numbers and:
 * Return: 1 if prime, 0 if otherwise
 */
int is_prime_func(int n, int i);

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_func(n, 2));
}

/**
 * is_prime_func - recursive func to check for prime numbers
 * @n: passed parameter
 * @i: created parameter
 *
 * Return: 1 if prime, 0 if otherwise
 */
int is_prime_func(int n, int i)
{
	if (n == i)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_func(n, i + 1));
}
