#include "main.h"

/**
 * read_textfile - Function that reads a text file and prints it
 *
 * @filename: The pathname of file to read
 * @letters: number of letters it should read and print
 *
 * Description: A function that reads a text file and prints it to
 * the POSIX standard output.
 * Return: Number of letters it could read and print, otherwise 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	/* Declarations */
	ssize_t file_descriptor, read_bytes, written_bytes;
	char *buffer;

	if (filename == NULL)
		return (0);

	/* Dynamic allocation for string to be written*/
	buffer = malloc(sizeof(char) * letters);

	/*Check to avoid avoid segmentation fault*/
	if (!buffer)
		return (0);

	/* Open file in read only using the oflag O_RDONLY */
	file_descriptor = open(filename, O_RDONLY);

	/* Read the file*/
	read_bytes = read(file_descriptor, buffer, letters);

	/* Output to standard output*/
	written_bytes = write(STDOUT_FILENO, buffer, letters);

	/* Check for fails*/
	if (read_bytes == -1 || written_bytes == -1 || file_descriptor == -1
	 || read_bytes != written_bytes)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	/* Close file descriptor */
	close(file_descriptor);

	/* Free memory to avoid memory leak */
	free(buffer);

	return (written_bytes);
}