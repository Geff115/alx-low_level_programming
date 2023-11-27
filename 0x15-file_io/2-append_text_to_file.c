#include "main.h"

/**
 * append_text_to_file - A function that appends text at the end of a file.
 * filename: Name of the file.
 * text_content: NULL terminated string to add at the end of a file.
 *
 * Return: 1 on success, and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int str, k, j = 0;

	if (filename == NULL)
		return (-1);
	k = open(filename, O_WRONLY | O_APPEND);
	if (k == -1)
		return (-1);
	if (text_content != NULL)
	{
		str = strlen(text_content);
		j = write(k, text_content, str);
		if (j == -1)
			return (-1);
	}
	if (close(k) == -1)
		return (-1);
	return (1);
}

