#include "holberton.h"

/**
 * read_textfile - Reads a text file and prints it to the
 * POSIX standard output
 * @filename: File name of the archive
 * @letters: Number of letters stored in the buffer
 *
 * Return: The size of the letters readed and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, readData;
	char *buffer;
	ssize_t ans;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);

	readData = read(fd, buffer, letters);

	if (readData < 0)
		return (0);
	ans = write(1, buffer, readData);

	if ((ans < 0) | (ans != readData))
		return (0);
	free(buffer);
	return (ans);
}
