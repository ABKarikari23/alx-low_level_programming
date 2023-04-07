#include "main.h"
#include <stdlib.h>

/**
 * create_file - Function that creates a file
 * @text_content: Pointer to a string that write a file
 * @filename: Pointer to the name of the created file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int i = 0, file;

	if (text_content == NULL)
		text_content = "";

	if (filename == NULL)
		return (-1);

	while (text_content[i] != '\0')
	{
		i++;
	}

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	write(file, text_content, i);
	return (1);
}
