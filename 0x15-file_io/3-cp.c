#include "main.h"
/**
 * main - program that copies the content of a file to another file
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array of pointers containing strings entering main
 * Return: Always 0 on (Success)
 */
int main(int argc, char **argv)
{
	int fdf, fdt, chckr, chckw, chck1, chck2;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fdf = open(argv[1], O_RDONLY);
	if (fdf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdt = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fdt == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((chckr = read(fdf, buf, 1024)) > 0)
	{
		chckw = write(fdt, buf, chckr);
		if (chckw != chckr)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (chckr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	chck1 = close(fdf);
	if (chck1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdf), exit(100);
	chck2 = close(fdt);
	if (chck2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdt), exit(100);
	return (0);
}
