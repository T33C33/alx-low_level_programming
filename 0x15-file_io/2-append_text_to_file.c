#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: file name
 * @text_content: text to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_count = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
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
	return (1);
}
