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
	 int fcount;
	 int wcount;
	fd = open(filename, O_RDONLY);
	if (fd == -1 || filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fcount = read(fd, buf, sizeof(char) * letters);
	wcount = write(STDOUT_FILENO, buf, fcount);
	if (wcount == -1 || fcount != wcount)
		return (0);
	buf++;
	close(fd);
	return (fcount);
}
