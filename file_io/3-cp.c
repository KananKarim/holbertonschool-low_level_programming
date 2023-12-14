#include "main.h"

#define BUFFER_SIZE 1024

/**
 * openReading - Opens a file for reading and handles errors.
 * @filename: The name of the file to open.
 *
 * Return: File descriptor of the opened file.
 */

int openReading(const char *filename)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}

	return (fd);
}

/**
 * openWriting - Opens a file for writing and handles errors.
 * @filename: The name of the file to open.
 *
 * Return: File descriptor of the opened file.
 */

int openWriting(const char *filename)
{
	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (fd);
}

/**
 * copyFile - Copies data from one file descriptor to another.
 * @f_from: filename
 * @f_to: filename
 * @fd_from: The source file descriptor.
 * @fd_to: The destination file descriptor.
 */

void copyFile(int fd_from, int fd_to, const char *f_from, const char *f_to)
{
	char buffer[BUFFER_SIZE];
	ssize_t rd, wr;

	while ((rd = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		wr = write(fd_to, buffer, rd);

		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", f_to);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}

	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f_from);
		close(fd_from);
		close(fd_to);
		exit(98);
	}
}

/**
 * closeFile - Closes a file descriptor and handles errors.
 * @fd: The file descriptor to close.
 * @filename: The name of the file associated with the file descriptor.
 */

void closeFile(int fd, const char *filename)
{
	int cl = close(fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd for %s\n", filename);
		exit(100);
	}
}

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = openReading(argv[1]);

	fd_to = openWriting(argv[2]);

	copyFile(fd_from, fd_to, argv[1], argv[2]);
	closeFile(fd_from, argv[1]);
	closeFile(fd_to, argv[2]);

	return (0);
}
