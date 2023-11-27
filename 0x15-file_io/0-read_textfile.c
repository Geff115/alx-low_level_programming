#include "main.h"

/**
 * read_textfile -  a function that reads a text file and prints it to the POSIX standard output.
 * @letters: number of letters being read and printed.
 * @filename: the file that is being read.
 *
 * Return: return (0) if file can't be opened or read. return (a) if file can be read.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a;
	ssize_t g;
	ssize_t k;
	char *lett;

	g = open(filename, O_RDONLY);
	if (g == -1)
		return (0);

	lett = malloc(sizeof(char) * letters);
	if (lett == NULL)
		return (0);
	k = read(g, lett, letters);
	if (k == -1)
	{
		free(lett);
		return (0);
	}
	a = write(STDOUT_FILENO, lett, k);
	if (a == -1)
	{
		free(lett);
		return (0);
	}

	if (close(g) == -1)
		return (0);
	free(lett);
	return (a);
}

