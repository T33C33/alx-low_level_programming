#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generates random valid passwords for 101-crackme
 *
 * Return: Always returns o
 */
int main(void)
{
	int i;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char password[12];
	int length = sizeof(alpha) - 1;

	srand(time(NULL));

	while (alpha[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < 12; i++)
	{
		int random = rand() % length;
		password[i] = alpha[random];
	}
	password[12] = '\0';
	printf("%s\n", password);
	return (0);
}
