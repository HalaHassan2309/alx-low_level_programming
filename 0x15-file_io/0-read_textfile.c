#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 * 
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, r, w;
	char *buf;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);
	buf = malloc(sizeof(char) * letters);

	if (!buf)
		return (0);

	r = read(file, buf, letters);
	buf[r] = '\0';
	close(file);
	w = write(STDOUT_FILENO, buf, i);

	if (file == -1 || r == -1 || w == -1 || w != r)
	{
		free(buf);
		return (0);
	}

	free(buf);
	return (w);
}