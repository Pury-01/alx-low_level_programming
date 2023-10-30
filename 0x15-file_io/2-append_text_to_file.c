#include "main.h"

/**
 *append_text_to_file - appends text at the end of a file
 *@filename: name of the file
 *@text_content: content in the file
 *
 *Return: 1 on success
 *-1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fil, wirite, length = 0;

	if (!filename)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	fil = open(filename, O_WRONLY | O_APPEND);
	wirite = write(fil, text_content, length);
	if (fil == -1 || wirite == -1)
		return (-1);

	close(fil);
	return  (1);
}
