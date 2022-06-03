#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - Function that prints a textfile
 * @filename: the filename to open
 * @letters: Number of letters
 * Return: Number of letters read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fopen, fwrite, fread;
	char *temp;

	if (filename == NULL)
		return (0);

	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
		return (0);

	fopen = open(filename, O_RDONLY);
	if (fopen < 0)
	{
		free(temp);
		return (0);
	}

	fread = read(fopen, temp, letters);
	if (fread < 0)
	{
		free(temp);
		return (0);
	}

	fwrite = write(STDOUT_FILENO, temp, fread);
	free(temp);
	close(fopen);

	if (fwrite < 0)
	{
		return (0);
	}

	return ((ssize_t)fwrite);
}
