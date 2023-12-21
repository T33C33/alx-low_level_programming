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
	FILE *file;
	size_t c = 0;
	int fd = 0;

	file = fopen(filename, "w");
	if ((filename == NULL) || (file == NULL))
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		c = fwrite(text_content, sizeof(char), strlen(text_content), file);
	}
	fclose(file);
	if (c != strlen(text_content))
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
