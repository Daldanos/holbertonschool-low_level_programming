#include "main.h"

/**
 * create_file - main function
 * @filename: filename
 * @text_content: text
 * Return: return
 */

int create_file(const char *filename, char *text_content)
{
	int i, len, written;
	len = 0;

	if (filename == NULL)
		return (-1);

	i = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (i == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		written = write(i, text_content, len);
		if (written == -1 || written != len)
		{
			close(i);
			return (-1);
		}
	}
	close(i);
	return (1);
}
