#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

/**
 *append_text_to_file - appends text at the end of a file.
 *@filename: the name of the file
 *@text_content: erminated string to add at the end of the file
 *Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
  int file, bytes_written;

  if (!filename)
    return (-1);

  file = open(filename, O_WRONLY | O_APPEND);
  if(file < 0)
    return (-1);

  if (text_content != NULL)
    {
      bytes_written = write(file, text_content, sizeof(text_content) -2);

      if (bytes_written < 0)
	{
	  close(file);
	  return (-1);
    }
    }

  close(file);
  return (1);
}
