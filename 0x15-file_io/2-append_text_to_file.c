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
	int open_file, write_file, len = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}

	open_file = open(filename, O_WRONLY | O_APPEND);
	if (oopen_file == -1)
		return (-1);

	write_file = write(open_file, text_content, len);
	if (write_file == -1)
	{
		close(open_file);
		return (-1);
	}
	close(open_file);

	return (1);
}
