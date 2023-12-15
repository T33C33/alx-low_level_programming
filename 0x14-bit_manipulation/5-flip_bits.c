#include "main.h"

/**
 * flip_bits - returns number of bits needed to flip
 * for one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res = n ^ m;
	unsigned int num = 0;

	while (res > 0)
	{
		num += res & 1;
		res >>= 1;
	}
	return (num);
}
