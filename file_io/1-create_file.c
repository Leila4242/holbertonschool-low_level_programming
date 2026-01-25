#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 *         if the file already exists, truncate it
 *         if filename is NULL return -1
 *         if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w;
	size_t len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		w = write(fd, text_content, len);
		if (w != (ssize_t)len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
