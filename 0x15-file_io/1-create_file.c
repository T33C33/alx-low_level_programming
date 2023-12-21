#include "main.h"

/**
 * create_file - creates a file
 * @filename: file to create
 * @text_content: content to write to into filename
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	FILE *file = fopen(filename, "w");
	size_t write_count = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (file == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		write_count = fwrite(text_content, sizeof(char), strlen(text_content), file);
	}
	if (write_count != strlen(text_content))
	{
		fclose(file);
		return (-1);
	}
	fclose(file);
	return (1);
}
