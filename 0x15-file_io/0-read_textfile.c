#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - fuction that read a text file and print it out the POSIX std
 * out
 * @filename: file containing text to print.
 * @letters: max char to print.
 * Return: number of chars printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, err, rd;
	char *buffer;

	fd = err = rd = 0;
	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters + 1);
	if (!buffer)
		return (0);
	rd = read(fd, buffer, letters);
	if (rd < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[letters] = '\0';
	err = write(STDOUT_FILENO, buffer, rd);
	if (err <= 0)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);
	return (rd);
}
