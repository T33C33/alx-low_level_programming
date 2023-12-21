#include "main.h"

/**
 * read_textfile - reads a file, prints it to POSIX STD_OUT.
 * @filename: char pointer of  filename
 * @letters: number of letters to operate on
 *
 * Return: 0, if the file can not be opened or read
 * 0, if filename is NULL
 * 0, if write fails or does not
 * write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t open_file, read_file, write_file;

	if (filename == NULL)
		return (0);
	open_file = open(filename, O_RDONLY);
	if (open_file == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(open_file);
		return (0);
	}
	read_file = read(open_file, buffer, letters);
	if (open_file == -1)
	{
		free(buffer);
		close(open_file);
		return (0);
	}
	buffer[read_file] = '\0';
	write_file = write(STDOUT_FILENO, buffer, read_file);
	if (write_file == -1 || write_file != read_file)
	{
		free(buffer);
		close(open_file);
		return (0);
	}
	free(buffer);
	close(open_file);
	return (read_file);
}
