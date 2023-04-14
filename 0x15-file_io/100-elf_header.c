#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <elf.h>
#include <unistd.h>
#include "main.h"

/**
 *print_error - Prints the error message to stderr and \
exits with status code 98.
 *@error_msg: error message
 */
void print_error(char *error_msg)
{
fprintf(stderr, "Error: %s\n", error_msg);
exit(98);
}

/**
 *print_elf_header - Prints the ELF header information to \
stdout in the required format.
 *@header: the header struct
 */
void print_elf_header(ELF_Header header)
{
printf("ELF Header:\n");
printf("  Magic:   ");
print_magic(header.magic);
printf("  Class:                             ");
print_class(header.class);
printf("  Data:                              ");
print_data(header.data);
printf("  Version:                           ");
print_version(header.version);
printf("  OS/ABI:                            ");
print_osabi(header.osabi);
printf("  ABI Version:                       ");
print_abiversion(header.abiversion);
printf("  Type:                              ");
print_type(header.type);
printf("  Entry point address:               ");
print_entry(header.entry);
printf("\n");
}

/**
 *read_elf_header - Reads the ELF header from the input file and stores \
it in the 'header' variable. Returns 1 on success, and 0 on failure.
*@fd: the file descriptor
*@header: the header struct
*Return: int
*/
int read_elf_header(int fd, ELF_Header *header)
{
int result;
/* Seek to the beginning of the file*/
lseek(fd, 0, SEEK_SET);

/*Read the ELF header*/
result = read(fd, header, sizeof(ELF_Header));

/*Return 1 on success, 0 on failure*/
if (result != sizeof(ELF_Header))
return (0);
return (1);
}

/**
 *main - entry point
 *@argc: argc
 *@argv: argv
 *Return: int
 */

int main(int argc, char *argv[])
{
int fd;
char *filename;
ELF_Header header;
unsigned char magic[4];
if (argc != 2)
{
fprintf(stderr, "Usage: elf_header elf_filename\n");
exit(98);
}
filename = argv[1];
fd = open(filename, O_RDONLY);
if (fd == -1)
{
fprintf(stderr, "Error: Unable to open file '%s'\n", filename);
exit(98);
}

fd = open(filename, O_RDONLY);
if (fd == -1)
{
print_error("Error: Could not open file\n");
}

if (read(fd, magic, 4) != 4 || magic[0] != 0x7f || magic[1] != 'E' ||
magic[2] != 'L' || magic[3] != 'F')
{
print_error("Error: Not an ELF file\n");
}

if (lseek(fd, 0, SEEK_SET) == -1)
{
print_error("lseek failed");
}
read_elf_header(fd, &header);
print_elf_header(header);
close(fd);

return (0);
}
