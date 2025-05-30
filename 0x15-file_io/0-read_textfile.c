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
	FILE *opfile;
	ssize b_read, b_written;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}
	opfile = fopen(filename, "r");
	if (opfile == NULL)
	{
		return (0);
	}

	buff = malloc(letters);
	if (buff == NULL)
	{
		fclose(opfile);
		return (0);
	}

	b_read = fread(buff, sizeof(char), letters, opfile);
	if (b_read <= 0)
	{
		free(buff);
		fclose(opfile);
		return (0);
	}

	b_written = write(STDOUT_FILENO, buff, b_read);
	free(buff);
	fclose(opfile);

	if (b_written != b_read)
		return (0);
	return (b_written);
}
