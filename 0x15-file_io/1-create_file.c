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
	int cntnt;
	int rer;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_contnet = "";

	for (cntnt = 0; text_content[cntnt]; cntnt++)
		;

	rer = write(fd, text_content, cntnt);

	if (rer == -1)
		return (-1);

	close(fd);

	return (1);
}
