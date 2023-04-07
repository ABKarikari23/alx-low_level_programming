#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Function that reads a text file and prints
 * @filename: Read text file
 * @letters: The sum of readable letters
 * Return: The sum of letters it could read and print 0 when function fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *text;
	ssize_t file, let, w;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(text);
		return (0);
	}

	let = read(file, text, letters);

	w = write(STDOUT_FILENO, text, let);

	close(file);

	return (w);
}


