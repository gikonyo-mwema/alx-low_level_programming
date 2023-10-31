#include "main.h"
/**
 * append_text_to_file - appendstext at the end of a file.
 * @filename: name
 * @text_content: string to append
 *
 * Return: 1 if is success and (-1) on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		int lText, lWrite;

		for (lText = 0; text_content[lText] != '\0'; lText++)
			;
		lWrite = write(fd, text_content, lText);

		if (lWrite == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
