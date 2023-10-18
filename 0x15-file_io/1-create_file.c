#include "main.h"
/**
 * create_file - A function that creates a file.
 * @file_name: A pointer to the file that'll be created.
 * @text_content: A NULL terminated string to write to the file.
 *
 * Return - Always 1 on success. Return -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int g, clo, mar = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		clo = strlen(text_content);

	mar = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	g = write(mar, text_content, clo);

	if (mar == -1)
		return (-1);
	if (g == -1)
		return (-1);
	close(mar);
	return (1);
}

