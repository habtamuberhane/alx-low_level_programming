#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - Function that creat a file
 * @filename: Filename to create
 * @text_content: String to write on tis file
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fopen, fwrite;
	int len = 0;

	if (filename == NULL)
		return (-1);

	fopen = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fopen < 0)
		return (-1);

	while (text_content && *(text_content + len))
		len++;

	fwrite = write(fopen, text_content, len);
	close(fopen);

	if (fwrite < 0)
		return (-1);

	return (1);
}
