#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: file to create
 * @text_content: string to write to the file
 *
 * Return: 1 (success), -1 (failure)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		int lWrite, lText;

		for (lText = 0; text_content[lText] != '\0'; lText++)
			;
		lWrite = write(fd, text_content, (lText));
		if (lWrite == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
