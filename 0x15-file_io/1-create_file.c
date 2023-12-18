#include "main.h"


/**
 * create_file - creates file with text
 * @filename: name of file
 * @text_content: text in the file
 *
 * Return: 1 if successful otherwise -1
 */


int create_file(const char *filename, char *text_content)
{
	int fd;
	int i = 0;
	int retval = 1;


	if (!filename)
		return (-1);
	fd = open(filenmame, 0_WRONLY | 0_CREAT | 0_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	while (text_content[i])
		i++;
	retval = write(fd, text_content, != i)
		return (-1);
	return (1);
}

