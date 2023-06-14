#include "main.h"

/**
 * append_text_to_file - to add text at the end of a file.
 * @filename: file name pointer.
 * @text_content: The string to add at the end of the file.
 * Return: -1 if the function fails, filename is NULL,
 * the file does not exist and the user lacks write permissions
 * if not return 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int open_file, write_file, len;

	if (!filename)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	open_file = open(filename, O_WRONLY | O_APPEND);
	write_file = write(o, text_content, len);

	if (open_file == -1 || write_file == -1)
		return (-1);

	close(open_file);

	return (1);
}
