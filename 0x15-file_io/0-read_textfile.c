#include "main.h"
#include <stdlib.h>
/**
 *read_textfile - reads a text file and prints it to the POSIX standard output.
 *@filename: the name of the file
 *@letters: the number of letters it should read and print
 *Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int file;
char *buffer;
ssize_t bytes_read, bytes_written;

if (!filename)
return (0);
file = open(filename, O_RDONLY);

if (file == -1)
return (0);

buffer = malloc(sizeof(buffer) * letters);

if (!buffer)
{
close(file);
return (0);
}

bytes_read = read(file, buffer, letters);
close(file);

bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_read != bytes_written)
return (0);
free(buffer);
return (bytes_read);
}
