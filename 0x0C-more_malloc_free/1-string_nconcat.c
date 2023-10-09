#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: string 1; pointer to char
 * @s2: string 2; pointer to char
 * @n: no of bytes
 *
 * Description: returned pointer shall point to new alc mem space
 * containing s1, followed by the first n bytes of s2,
 * and null terminated
 * f n is greater or equal to the length of s2
 * then use the entire string s2
 * if NULL is passed, treat it as an empty string
 * Return: NULL if function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lgth1 = 0, lgth2 = 0, i, j;
	char *cnct;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[lgth1] != '\0')
	{
		lgth1++;
	}
	while (s2[lgth2] != '\0')
	{
		lgth2++;
	}
	if (n >= lgth2)
	{
		n = lgth2;
	}
	cnct = malloc(sizeof(char) * (lgth1 + n + 1));
	if (cnct == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < lgth1; i++)
	{
		cnct[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		cnct[i + j] = s2[j];
	}
	cnct[i + j] = '\0';
	return (cnct);
}
