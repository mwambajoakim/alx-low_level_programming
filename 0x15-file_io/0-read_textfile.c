#include "main.h"

/**
 * read_textfile - Writes text to stdout
 * @filename: Pointer to the file
 * @letters: Number of letters to write
 *
 * Return: The number of letters written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int opfile;
	ssize_t b_read, b_written;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}
	opfile = open(filename, O_RDONLY);
	if (opfile < 0)
	{
		return (0);
	}

	buff = malloc(letters);
	if (buff == NULL)
	{
		close(opfile);
		return (0);
	}

	b_read = read(opfile, buff, letters);
	if (b_read <= 0)
	{
		free(buff);
		close(opfile);
		return (0);
	}

	b_written = write(STDOUT_FILENO, buff, b_read);
	free(buff);
	close(opfile);

	if (b_written != b_read)
		return (0);
	return (b_written);
}
