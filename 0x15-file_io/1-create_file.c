#include "main.h"
#include <string.h>

/**
 * create_file - creates a file with content
 * @filename: name of file
 * @text_content: text put in the file
 *
 * Return: 1 if successful otherwise -1
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t input;
	int nd;

	if (filename == NULL)
		return (-1);

	nd = open(filename O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (nd == -1)
		return (-1);

	if (text_content != NULL)
	{
		input = write(nd, text_content, strlen(text_content));
		if (input == -1)
		{
			close(nd);
			return (-1);
		}
	}
	close(nd);
	return (1);
}
