#include "main.h"

/**
 * append_text_to_file - Appends text to a file
 * @filename: File name
 * @text_content: Text content to append
 *
 * Return: 1 if successful, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opfile;
	ssize_t length, written_b;

	if (filename == NULL)
	{
		return (-1);
	}
	opfile = open(filename, O_WRONLY | O_APPEND, 0222);
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
