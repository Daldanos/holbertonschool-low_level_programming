#include "main.h"

/**
 * read_textfile - main function
 * @filename: filename
 * @letters: letters
 * Return: return
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t bytesr;
	char *buffer;

	if (filename == NULL)
		return (0);

	i = open(filename, O_RDONLY);
	if (i == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(i);
		return (0);
	}
	bytesr = read(i, buffer, letters);
	if (bytesr == -1)
	{
		close(i);
		free(buffer);
		return (0);
	}
	if (write(STDOUT_FILENO, buffer, bytesr) != bytesr)
	{
		close(i);
		free(buffer);
		return (0);
	}
	close(i);
	free(buffer);
	return (bytesr);
}
