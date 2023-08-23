#include "main.h"
/**
 * read_textfile - It is a function that will read a text file and print it to
 * the standard output.
 * @filename: The filename
 * @letters: The number of letters that should be read and printed
 * Return: The number of characters printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t rtrn, bytes;
	int fd;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	bytes = read(fd, buffer, letters);
	if (bytes == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	rtrn = write(STDOUT_FILENO, buffer, bytes);
	free(buffer);
	close(fd);
	if (rtrn == -1)
		return (0);
	return (rtrn);
}
