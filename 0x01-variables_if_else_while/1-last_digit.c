#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - will assign a random number to the variable
 *
 * Description: assigns a random number to variable with extra rules
 * Return: Always 0
 */
int main(void)
{
	int n;
	int lst;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lst = n % 10;
	if (lst > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lst);
	}
	else if (lst == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lst);
	}
	else if ((lst < 6) && (lst != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lst);
	}
	return (0);
}
