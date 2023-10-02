#include "main.h"


/**
 * append_text_to_file - appends text to a file
 * @filename: name of file
 * @text_content: file content to be written
 *
 * Return: 1 if succesful otherwise -1
 */


int append_text_to_file(const char *filename, char *text_content)
{
		int fd, m = 0;
		int retval = 1;


		if (!filename)
			return (-1);
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
		if (!text_content)
		{
			close(fd);
			return (-1);
		}
		while (text_content[m])
			m++;
		retval = write(fd, text_content, m);
		close(fd);
		if (retval == -1)
			return (-1);
		return (1);
}
