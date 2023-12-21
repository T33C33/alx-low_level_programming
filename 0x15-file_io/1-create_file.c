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
	int fd;
	ssize_t write_count;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		write_count = write(fd, text_content, strlen(text_content));
		if (write_count == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	if (chmod(filename, S_IRUSR | S_IWUSR) == -1)
	{
		return (-1);
	}
	return (1);
}
