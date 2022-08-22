#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include "main.h"
/**
 * append_text_to_file - Create a file object
 * @filename: char *
 * @text_content: char *
 * Return: 1 on success, -1 on faluire
 */

int append_text_to_file(const char *filename, char *text_content)
{
	 int fd;
	 int wcount;
	 int i;
	fd = open(filename, O_CREAT | O_WRONLY | O_APPEND, 0600);
	if (fd == -1 || filename == NULL)
		return (-1);
	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		wcount = write(fd, text_content, i);
		if (wcount == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
