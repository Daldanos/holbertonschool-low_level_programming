#include "main.h"

/**
 * append_text_to_file - main function
 * @filename: filename
 * @text_content: text
 * Return: return
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, len, written;

	len = 0;

	if (filename == NULL)
		return (-1);


	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}
	i = open(filename, O_WRONLY | O_APPEND);
	if (i == -1)
		return (-1);

	if (text_content != NULL)
	{
		written = write(i, text_content, len);
		if (written == -1)
		{
			close(i);
			return (-1);
		}
	}
	close(i);
	return (1);
}
