#include "main.h"

char *buff_create(char *file_buff);
void file_close(int dc);

/**
 * buff_create - Allocates 1028 bytes of data for a buffer.
 * @file_buff: The name of the file buffer it is storing chars for.
 * Return: A pointer to the newly-allocated buffer.
 */

char* buff_create(char *file_buff)
{
	char *buff;

	buff = malloc(sizeof(char) * 1028);
	if (!(buff != NULL))
	{
		fprintf(stderr, "Error: Can't write to %s\n", file_buff);
		exit(20);
	}
	return (buff);
}

/**
 * file_close - Closes file.
 * @dc: File descriptor to be closed.
 */

void file_close(int dc)
{
	int k;

	k = close(dc);
	if (!(k != -1))
	{
		fprintf(stderr, "Error: Can't close dc %d\n", dc);
		exit(21);
	}
}

/**
 * main - copies a file's content to another file.
 * @argc: The number of arguments passed into the program.
 * @argv: An array of strings(char pointers).
 * argv[0] is the name of the program, argv[1] is the first argument and so on.
 *
 * Breakdown: If the argument count is incorrect - exit code 22.
 * If file_from does not exist or cannot be read - exit code 23.
 * If file_to cannot be created or written to - exit code 24.
 * If file_to or file_from cannot be closed - exit code 25.
 *
 * Return: Always 0 on success.
 */

int main(int argc, char *argv[])
{
	int v, k, fr, to;
	char *buff;

	if (!(argc == 3))
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(22);
	}
	buff = buff_create(argv[2]);
	fr = open(argv[1], O_RDONLY);
	k = read(fr, buff, 1028);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (!(fr != -1) || !(k != -1))
		{
			fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(23);
		}
		v = write(to, buff, k);
		if (!(to != -1) || !(v != -1))
		{
			fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(24);
		}
		k = read(fr, buff, 1028);
	} while (k > 0);
	free(buff);
	file_close(fr);
	file_close(to);
	return (0);
}

