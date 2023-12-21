#include "main.h"
#define BUFFER_SIZE 1024

/**
 * error_exit - prints error message
 * @status: exit status
 * @msg: message to print
 */
void error_exit(int status, char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(status);
}

/**
 * main - copies content of file to another file
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, otherwise exits with error codes
 */
int main(int argc, char *argv[])
{
	int from, to;
	ssize_t read_count, write_count;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to");
	from = open(argv[1], O_RDONLY);
	if (from == -1)
		error_exit(98, "Error: Can't read from file");
	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (to == -1)
		error_exit(99, "Error: Can't write to file");
	while ((read_count = read(from, buffer, BUFFER_SIZE)) > 0)
	{
		write_count = write(to, buffer, read_count);
		if (write_count != read_count)
			error_exit(99, "Error: Can't write to file");
	}
	if (read_count == -1)
		error_exit(98, "Error: Can't read from file");
	if (close(from) == -1)
		error_exit(100, "Error: Can't close fd");
	if (close(to) == -1)
		error_exit(100, "Error: Can't close fd");
	return (0);
}
