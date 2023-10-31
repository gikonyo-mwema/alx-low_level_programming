#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename: number of letters it should read and print
 * @letters: number of leters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	int lRead, lWrite;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(letters * sizeof(char));

	if (buff == NULL)
		return (0);

	lRead = read(fd, buff, letters);

	lWrite = write(STDOUT_FILENO, buff, lRead);
	if (lWrite != lRead && lWrite == -1)
		return (0);

	free(buff);
	close(fd);
	return (lRead);
}
