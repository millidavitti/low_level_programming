#include "main.h"
#include <errno.h>

/**
 *create_file - creates a file.
 *@filename: the name of the file to create
 *@text_content: string to write
 *Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
int file, bytes_written;

if (!filename)
return (-1);

file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

if (file < 0)
return (-1);

bytes_written = write(file, text_content, sizeof(text_content) - 2);

if (bytes_written < 0 || bytes_read < 0)
return (-1);

close(file);
return (1);
  
}
