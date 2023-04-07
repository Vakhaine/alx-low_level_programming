#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 *
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Does not create the file if it does not exist
 * If filename is NULL return -1
 * If text_content is NULL, does not add anything to the file
 * If it exists 1, if it does not or no permission -1
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0;
	int w, app;

	if (filename == NULL)
		return (-1);
	else if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	app = open(filename, O_WRONLY | O_APPEND);
	w = write(app, text_content, len);

	if (app == -1 || w == -1)
		return (-1);
	close(app);

	return (1);

}
