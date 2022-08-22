#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include "main.h"
/**
 * create_file - Create a file object
 * @filename: char *
 * @text_content: char *
 * Return: 1 on success, -1 on faluire
 */

int create_file(const char *filename, char *text_content)
{
	 int fd;
	 int wcount;
	fd = open(filename, O_CREAT | O_WRONLY, 0600);
	if (fd == -1 || filename == NULL)
		return (-1);
	wcount = write(fd, text_content, sizeof(text_content) - 1);
	if (wcount == -1)
		return (-1);
	close(fd);
	return (1);
}
