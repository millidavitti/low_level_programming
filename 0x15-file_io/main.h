#ifndef MAIN_H
#define MAIN_H

#define BUF_SIZE 1024

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <elf.h>

typedef struct {
    unsigned char magic[4];
    unsigned char class;
    unsigned char data;
    unsigned char version;
    unsigned char osabi;
    unsigned char abiversion;
    unsigned char pad[7];
    unsigned short type;
    unsigned short machine;
    unsigned int version_2;
    unsigned long entry;
    unsigned long phoff;
    unsigned long shoff;
    unsigned int flags;
    unsigned short ehsize;
    unsigned short phentsize;
    unsigned short phnum;
    unsigned short shentsize;
    unsigned short shnum;
    unsigned short shstrndx;
} ELF_Header;

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

void print_magic(unsigned char* magic) {
  int i;
  printf("  Magic:   ");
    for(i = 0; i < 4; i++) {
        printf("%02x ", magic[i]);
    }
    printf("\n");
}

void print_class(unsigned char class) {
    printf("Class:                             ");
    switch (class) {
        case ELFCLASSNONE:
            printf("None\n");
            break;
        case ELFCLASS32:
            printf("ELF32\n");
            break;
        case ELFCLASS64:
            printf("ELF64\n");
            break;
        default:
            printf("<unknown: 0x%x>\n", class);
            break;
    }
}

void print_data(unsigned char data) {
    printf("Data:\t\t\t");
    switch(data) {
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("Invalid data encoding\n");
            break;
    }
}

void print_version(unsigned char version) {
    printf("Version:\t\t\t\t\t%d", (int)version);
    switch(version) {
        case EV_CURRENT:
            printf(" (current)");
            break;
        default:
            printf(" (invalid)");
            break;
    }
    printf("\n");
}

void print_osabi(unsigned char osabi) {
    printf("OS/ABI:\t\t\t\t");
    switch (osabi) {
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_HPUX:
            printf("HP-UX ABI\n");
            break;
        case ELFOSABI_NETBSD:
            printf("NetBSD ABI\n");
            break;
        case ELFOSABI_LINUX:
            printf("Linux ABI\n");
            break;
        case ELFOSABI_SOLARIS:
            printf("Solaris ABI\n");
            break;
        case ELFOSABI_AIX:
            printf("AIX ABI\n");
            break;
        case ELFOSABI_IRIX:
            printf("IRIX ABI\n");
            break;
        case ELFOSABI_FREEBSD:
            printf("FreeBSD ABI\n");
            break;
        case ELFOSABI_TRU64:
            printf("Compaq TRU64 UNIX ABI\n");
            break;
        case ELFOSABI_ARM_AEABI:
            printf("ARM EABI\n");
            break;
        case ELFOSABI_ARM:
            printf("ARM\n");
            break;
        case ELFOSABI_STANDALONE:
            printf("Standalone (embedded) ABI\n");
            break;
        default:
            printf("Unknown\n");
            break;
    }
}

void print_abiversion(unsigned char abiversion) {
    printf("  ABI Version:\t\t\t%d\n", abiversion);
}

void print_type(unsigned short type) {
    printf("Type:\t\t\t");
    switch(type) {
        case ET_NONE:
            printf("NONE (Unknown type)\n");
            break;
        case ET_REL:
            printf("REL (Relocatable file)\n");
            break;
        case ET_EXEC:
            printf("EXEC (Executable file)\n");
            break;
        case ET_DYN:
            printf("DYN (Shared object file)\n");
            break;
        case ET_CORE:
            printf("CORE (Core file)\n");
            break;
        default:
            printf("0x%x (Unknown type)\n", type);
            break;
    }
}

void print_entry(unsigned long entry) {
    printf("Entry point address: %#lx\n", entry);
}
#endif	/* MAIN_H */
