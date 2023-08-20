#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void elf(unsigned char *e);
void magic(unsigned char *e);
void class(unsigned char *e);
void data(unsigned char *e);
void ver(unsigned char *e);
void abi(unsigned char *e);
void sabi(unsigned char *e);
void type(unsigned int t, unsigned char *e);
void en(unsigned long int ee, unsigned char *e);
void cl(int e);
/**
 * elf - is a file ELF or not
 * @e: array
 * Return: nothing
 */
void elf(unsigned char *e)
{
int i;
for (i = 0; i < 4; i++)
{
if (e[i] != 127 && e[i] != 'E' && e[i] != 'L' && e[i] != 'F')
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
exit(98);
}
}
}

/**
 * magic - print numbers
 * @e: array
 * Return: nothing
 */
void magic(unsigned char *e)
{
int i;
printf("  Magic: ");
for (i = 0; i < EI_NIDENT; i++)
{
printf("%02x", e[i]);
if (i == EI_NIDENT - 1)
printf("\n");
else
printf(" ");
}
}

/**
 * class - print classes
 * @e: array
 * Return: nothing
 */
void class(unsigned char *e)
{
printf("  Class: ");
switch (e[EI_CLASS])
{
case ELFCLASSNONE:
printf("none\n");
break;
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown: %x>\n", e[EI_CLASS]);
}
}

/**
 * data - print data
 * @e: array
 * Return: nothing
 */
void data(unsigned char *e)
{
printf("  Data:                              ");
switch (e[EI_DATA])
{
case ELFDATANONE:
printf("none\n");
break;
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown: %x>\n", e[EI_DATA]);
}
}

/**
 * ver - print ELF version
 * @e: array
 * Return: nothing
 */
void ver(unsigned char *e)
{
printf("  Version:                           %d",
e[EI_VERSION]);
switch (e[EI_VERSION])
{
case EV_CURRENT:
printf(" (current)\n");
break;
default:
printf("\n");
break;
}
}

/**
 * abi - print os/abi
 * @e: array
 * Return: nothing
 */
void abi(unsigned char *e)
{
printf("  OS/ABI:                            ");
switch (e[EI_OSABI])
{
case ELFOSABI_NONE:
printf("UNIX - System V\n");
break;
case ELFOSABI_HPUX:
printf("UNIX - HP-UX\n");
break;
case ELFOSABI_NETBSD:
printf("UNIX - NetBSD\n");
break;
case ELFOSABI_LINUX:
printf("UNIX - Linux\n");
break;
case ELFOSABI_SOLARIS:
printf("UNIX - Solaris\n");
break;
case ELFOSABI_IRIX:
printf("UNIX - IRIX\n");
break;
case ELFOSABI_FREEBSD:
printf("UNIX - FreeBSD\n");
break;
case ELFOSABI_TRU64:
printf("UNIX - TRU64\n");
break;
case ELFOSABI_ARM:
printf("ARM\n");
break;
case ELFOSABI_STANDALONE:
printf("Standalone App\n");
break;
default:
printf("<unknown: %x>\n", e[EI_OSABI]);
}
}

/**
 * sabi - print abi
 * @e: array
 * Return: Nothing
 */
void sabi(unsigned char *e)
{
printf("  ABI Version:                       %d\n", e[EI_ABIVERSION]);
}

/**
 * type - print ELF type
 * @t: type
 * @e: array
 * Return: nothing
 */
void type(unsigned int t, unsigned char *e)
{
if (e[EI_DATA] == ELFDATA2MSB)
t >>= 8;
printf("  Type:                              ");
switch (t)
{
case ET_NONE:
printf("NONE (None)\n");
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
printf("<unknown: %x>\n", t);
}
}

/**
 * en - print entry point
 * @ee: address
 * @e: array
 * Return: nothing
 */
void en(unsigned long int ee, unsigned char *e)
{
printf("  Entry point address:               ");
if (e[EI_DATA] == ELFDATA2MSB)
{
ee = ((ee << 8) & 0xFF00FF00) |
((ee >> 8) & 0xFF00FF);
ee = (ee << 16) | (ee >> 16);
}
if (e[EI_CLASS] == ELFCLASS32)
printf("%#x\n", (unsigned int)ee);
else
printf("%#lx\n", ee);
}

/**
 * cl - close ELF
 * @e: descriptor
 * Return: nothing
 */
void cl(int e)
{
if (close(e) == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't close fd %d\n", e);
exit(98);
}
}

/**
 * main - print information
 * @argc: number of args
 * @argv: array of args
 * Return: 0
 */
int main(int __attribute__((__unused__))argc, char *argv[])
{
Elf64_Ehdr *header;
int op, rd;
op = open(argv[1], O_RDONLY);
if (op == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98);
}
header = malloc(sizeof(Elf64_Ehdr));
if (header == NULL)
{
cl(op);
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98);
}
rd = read(op, header, sizeof(Elf64_Ehdr));
if (rd == -1)
{
free(header);
cl(op);
dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
exit(98);
}
elf(header->e_ident);
printf("ELF Header:\n");
magic(header->e_ident);
class(header->e_ident);
data(header->e_ident);
ver(header->e_ident);
abi(header->e_ident);
sabi(header->e_ident);
type(header->e_type, header->e_ident);
en(header->e_entry, header->e_ident);
free(header);
cl(op);
return (0);
}
