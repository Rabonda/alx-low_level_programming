#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - function that checks if a file is an ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * void: checks if a file is an ELF file.
 */
void check_elf(unsigned char *e_ident)
{
	int elf;

	elf = 0;
	while (elf < 4)
	{
		if (e_ident[elf] != 127 &&
		    e_ident[elf] != 'E' &&
		    e_ident[elf] != 'L' &&
		    e_ident[elf] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
		elf++;
	}
}

/**
 * print_magic - function that prints the magic numbers of an ELF header.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * void: prints the magic numbers of an ELF header.
 */
void print_magic(unsigned char *e_ident)
{
int i;

printf("  Magic:   ");
i = 0;
while (i < EI_NIDENT)
{
printf("%02x", e_ident[i]);
if (i == EI_NIDENT - 1)
	printf("\n");
else
	printf(" ");
i++;
}
}

/**
 * print_class - function that prints the class of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class.
 * void: prints the class of an ELF header.
 */
void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");

	if (e_ident[EI_CLASS] == ELFCLASSNONE)
		printf("none\n");
	else if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else if (e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}

/**
 * print_data - function that prints the data of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class.
 * void: prints the data of an ELF header.
 */
void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	if (e_ident[EI_DATA] == ELFDATANONE)
		printf("none\n");
	else if (e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (e_ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}

/**
 * print_version - function that prints the version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.
 * void: prints the version of an ELF header.
 */
void print_version(unsigned char *e_ident)
{
printf("  Version:                           %d",
e_ident[EI_VERSION]);
if (e_ident[EI_VERSION] == EV_CURRENT)
printf(" (current)\n");
else
printf("\n");
}
/**
 * print_osabi - function that prints the OS/ABI of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.
 * void: prints the OS/ABI of an ELF header.
 */
void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	if (e_ident[EI_OSABI] == ELFOSABI_NONE)
		printf("UNIX - System V\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_HPUX)
		printf("UNIX - HP-UX\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_NETBSD)
		printf("UNIX - NetBSD\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_LINUX)
		printf("UNIX - Linux\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_SOLARIS)
		printf("UNIX - Solaris\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_IRIX)
		printf("UNIX - IRIX\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_FREEBSD)
		printf("UNIX - FreeBSD\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_TRU64)
		printf("UNIX - TRU64\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_ARM)
		printf("ARM\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_STANDALONE)
		printf("Standalone App\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
}

/**
 * print_abi - function that prints the ABI version of an ELF header.
 * @e_ident: A pointer to an array.
 * void: prints the ABI version of an ELF header.
 */
void print_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
	       e_ident[EI_ABIVERSION]);
}

/**
 * print_type - function that prints the type of an ELF header.
 * @e_type: ELF.
 * @e_ident: A pointer to an array.
 * void: prints the type of an ELF header.
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");
	if (e_type == ET_NONE)
		printf("NONE (None)\n");
	else if (e_type == ET_REL)
		printf("REL (Relocatable file)\n");
	else if (e_type == ET_EXEC)
		printf("EXEC (Executable file)\n");
	else if (e_type == ET_DYN)
		printf("DYN (Shared object file)\n");
	else if (e_type == ET_CORE)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", e_type);
}

/**
 * print_entry - function that prints the entry point of an ELF header.
 * @e_entry: The address of the ELF.
 * @e_ident: A pointer to an array.
 * prints the entry point of an ELF header.
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * close_elf - function that closes an ELF file.
 * @elf: file descriptor.
 * void: closes an ELF file.
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - function that returns ELF file information.
 * @argc: The number of arguments.
 * @argv: An array of pointers.
 *
 * Return: returns 0 code success.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header_file;
	int file, read_file;

	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header_file = malloc(sizeof(Elf64_Ehdr));
	if (header_file == NULL)
	{
		close_elf(file);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	read_file = read(file, header_file, sizeof(Elf64_Ehdr));
	if (read_file == -1)
	{
		free(header_file);
		close_elf(file);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf(header_file->e_ident);
	printf("ELF Header:\n");
	print_magic(header_file->e_ident);
	print_class(header_file->e_ident);
	print_data(header_file->e_ident);
	print_version(header_file->e_ident);
	print_osabi(header_file->e_ident);
	print_abi(header_file->e_ident);
	print_type(header_file->e_type, header_file->e_ident);
	print_entry(header_file->e_entry, header_file->e_ident);

	free(header_file);
	close_elf(file);
	return (0);
}

