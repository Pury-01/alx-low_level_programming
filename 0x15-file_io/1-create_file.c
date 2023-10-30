#include "main.h"

/**
 *create_file - function that creates a file
 *@filename: name of the file
 *@text_content: the content in the file
 *
 *Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_created, result = 1, count = 0;

	if (!filename)
		return (-1);
	file_created = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_created == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[count])
			count++;
		result = write(file_created, text_content, count);
	}
	if (result == -1)
		return (-1);
	close(file_created);
	return (1);
}
