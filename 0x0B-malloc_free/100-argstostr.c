#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: number of arguments
 * @av: pointer to array
 *
 * Return: NULL if ac == 0 or av == NULL
 * pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int arg_index, char_index, str_index;
	char *str;

	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}
	for (arg_index = 0; arg_index < ac; arg_index++)
	{
		char *arg = av[arg_index];
		if (arg != NULL)
		{
			while (arg[char_index] != '\0')
			{
				total_length++;
				char_index++;
			}
			total_length++;
			char_index = 0;
		}
	}
	str = (char *)malloc((total_length + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	str_index = 0;
	for (arg_index = 0; arg_index < ac; arg_index++)
	{
		char *arg = av[arg_index];
		if (arg != NULL)
		{
			while (*arg != '\0')
			{
				str[str_index] = *arg;
				str_index++;
				arg++;
			}
			str[str_index] = '\n';
			str_index++;
		}
	}
	str[str_index] = '\0';
	return (str);
}
