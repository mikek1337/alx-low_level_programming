#include<stdio.h>
#include"main.h"
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
/**
 * read_textfile - reads the file that is provided and print it
 * @filename: string/char pointer
 * @letters: the amount of characters read
 * Return: 0 if file can not open or filename is null
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	 int fd;
	 char *buf;
	 char c;
	 int fcount;
	fd = open(filename, O_RDONLY);
	if (fd == -1 || filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	fcount = read(fd, buf, sizeof(char) * letters);
	while (*buf != '\0')
	{
		c = *buf;
		if (write(1, &c, 1) == -1)
			return (0);
		buf++;
	}
	close(fd);
	return (fcount);
}
