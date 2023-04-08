#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define BUF_SIZE 1024
/**
 *print_usage - print usage info
 *@program_name: string
 *Return: void
 */

void print_usage(char *program_name)
{
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", program_name);
}

/**
 *print_error - prints error message
 *@error_message: error message
 *@filename: the filename
 *Return: void
 */

void print_error(char *error_message, char *filename)
{
dprintf(STDERR_FILENO, "Error: %s %s\n", error_message, filename);
}

/**
 *copy_file -file copy function
 *@file_from: the source file
 *@file_to: the destination file
 *Return: void
 */

void copy_file(char *file_from, char *file_to)
{
int fd_from, fd_to, num_read, num_written;
char buf[BUF_SIZE];
fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
{
print_error("Can't read from file", file_from);
exit(98);
}
fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
if (fd_to == -1)
{
print_error("Can't write to", file_to);
exit(99);
}
while ((num_read = read(fd_from, buf, BUF_SIZE)) > 0)
{
num_written = write(fd_to, buf, num_read);
if (num_written != num_read)
{
print_error("Can't write to", file_to);
exit(99);
}
}
if (num_read == -1)
{
print_error("Can't read from file", file_from);
exit(98);
}
if (close(fd_from) == -1)
{
print_error("Can't close fd", "fd_from");
exit(100);
}
if (close(fd_to) == -1)
{
print_error("Can't close fd", "fd_to");
exit(100);
}
}

int main(int argc, char *argv[])
{
if (argc != 3)
{
print_usage(argv[0]);
exit(97);
}

copy_file(argv[1], argv[2]);

return (0);
}
