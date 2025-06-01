#include "main.h"

/**
 * create_file - Creates a file
 * @filename: File name
 * @text_content: Text content
 *
 * Return: 1 on success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int opfile;
	ssize_t length;
	ssize_t written_b;

	if (filename == NULL)
	{
		return (-1);
	}

	opfile = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (opfile < 0)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		length = strlen(text_content);
		written_b = write(opfile, text_content, length);
		if (written_b != length)
		{
			close(opfile);
			return (-1);
		}
	}
	close(opfile);
	return (1);
}
