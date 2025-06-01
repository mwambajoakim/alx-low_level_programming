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
	size_t length = strlen(text_content);

	if (filename == NULL)
	{
		return (-1);
	}
	if (filename)
	{
		if (text_content == NULL)
		{
			opfile = open(filename, O_CREAT, 0600);
			close(opfile);
			return (1);
		}
		opfile = open(filename, O_TRUNC | O_WRONLY, 0600);
		if (opfile < 0)
		{
			return (-1);
		}
		write(opfile, text_content, length);
		close(opfile);
		return (1);
	}
	opfile = open(filename, O_CREAT, 0600);
	write(opfile, text_content, length);
	close(opfile);
	return (1);
}
