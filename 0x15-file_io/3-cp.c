#include "main.h"

/**
 *check_file - checks if file opens
 *@file_out: incoming file
 *@file_in: outgoing file
 *@argv: argument vector
 */
void check_file(int file_out, int file_in, char *argv[])
{
	if (file_out == -1)
	{
		dprintf(STDERR_FILENO, "Error:Can't read form file %s\n", argv[1]);
		exit(98);
	}
	if (file_in == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 *main - checks the code
 *@argc: number of arguments
 *@argv: argument vector
 *
 *Return: 0(successful)
 */

int main(int argc, char *argv[])
{
	int file_out, file_in, err;
	ssize_t count, wirite;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_out file_in");
		exit(97);
	}
	file_out = open(argv[1], O_RDONLY);
	file_in = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	check_file(file_out, file_in, argv);

	count = 1024;
	while (count == 1024)
	{
		count = read(file_out, buf, 1024);
		if (count == -1)
			check_file(-1, 0, argv);
		wirite = write(file_in, buf, count);
		if (wirite == -1)
			check_file(0, -1, argv);
	}
	err = close(file_out);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error:  Can't close fd %d\n", file_out);
		exit(100);
	}
	err = close(file_in);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fdc%d\n", file_out);
		exit(100);
	}
	return (0);
}
