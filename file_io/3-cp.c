#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void check_args(int argc);
int open_file_from(char *filename);
int open_file_to(char *filename, int fd_from);
void copy_file(int fd_from, int fd_to, char *file_from, char *file_to);
void close_fd(int fd);

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	check_args(argc);

	fd_from = open_file_from(argv[1]);
	fd_to = open_file_to(argv[2], fd_from);

	copy_file(fd_from, fd_to, argv[1], argv[2]);

	close_fd(fd_from);
	close_fd(fd_to);

	return (0);
}
/**
 * check_args - checks number of arguments
 * @argc: argument count
 *
 * Exit with code 97 if argument count is incorrect
 */

void check_args(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
/**
 * open_file_from - opens source file for reading
 * @filename: name of the source file
 *
 * Return: file descriptor on success, exits on failure
 */

int open_file_from(char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", filename);
		exit(98);
	}

	return (fd);
}
/**
 * open_file_to - opens or creates destination file
 * @filename: name of the destination file
 * @fd_from: source file descriptor
 *
 * Return: destination file descriptor, exits on failure
 */

int open_file_to(char *filename, int fd_from)
{
	int fd_to;

	fd_to = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", filename);
		if (close(fd_from) == -1)
			dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", fd_from);
		exit(99);
	}

	return (fd_to);
}
/**
 * copy_file - copies content from one file to another
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 * @file_from: source file name
 * @file_to: destination file name
 */

void copy_file(int fd_from, int fd_to,
	char *file_from, char *file_to)
{
	char buffer[1024];
	ssize_t r, w;

	while ((r = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w != r)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file_to);
			if (close(fd_from) == -1)
				dprintf(STDERR_FILENO,
					"Error: Can't close fd %d\n", fd_from);
			if (close(fd_to) == -1)
				dprintf(STDERR_FILENO,
					"Error: Can't close fd %d\n", fd_to);
			exit(99);
		}
	}

	if (r == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", file_from);
		if (close(fd_from) == -1)
			dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", fd_from);
		if (close(fd_to) == -1)
			dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", fd_to);
		exit(98);
	}
}
/**
 * close_fd - closes a file descriptor
 * @fd: file descriptor to close
 *
 * Exit with code 100 on failure
 */

void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
