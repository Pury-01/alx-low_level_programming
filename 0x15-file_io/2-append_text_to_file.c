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
	int fil, wirite;

	if (!filename)
		return (-1);
	fil = open(filename, O_WRONLY | O_APPEND);
	if (fil == -1)
		return (-1);
	if (!text_content)
	{
		close(fil);
		return  (1);
	}
	wirite = write(fil, text_content, strlen(text_content));
	if (wirite == -1)
	{
		close(fil);
		return (-1);
	}
	close(fil);
	return (1);
}
