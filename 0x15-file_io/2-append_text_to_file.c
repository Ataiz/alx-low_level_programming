#include "main.h"
/**
 * append_text_to_file - A function that will append a text at the
 * end of a file
 * @filename: The filename
 * @text_content: A string
 * Return: Returns 1 on success, otherwise return -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t bytes;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	while (text_content && *(text_content + len))
		len++;

	bytes = write(fd, text_content, len);
	close(fd);
	if (bytes == -1)
		return (-1);
	return (1);
}
