#include "main.h"

/**
 *read_textfile - reads a text file and prints it to the POSIX
 *standard output
 *@filename: name of the file
 *@letters: letters contain in the file
 *
 *Return: the actual number of letters it should read and print
 *0 if filename is NULL or if file can't be opened or
 *read or if write fails or does not write expect bytes amount
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fil;
	ssize_t reade, wirite;

	char *buffer;

	if (!filename)
	{
		return (0);
	}
	/*file opening */
	fil = open(filename, O_RDONLY);
	if (fil == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	reade = read(fil, buffer, letters);
	if (reade == -1)
	{
		free(buffer);
		close(fil);
		return (0);
	}
	wirite = write(STDOUT_FILENO, buffer, reade);
	if (wirite == -1)
	{
		free(buffer);
		close(fil);
		return (0);
	}
	close(fil);
	return (reade);
}
