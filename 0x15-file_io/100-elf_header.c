#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_addr - function that prints address
 * @ptr: pointer.
 * Return: void prints
 */
void print_addr(char *ptr)
{
int index, first_index;
char addres;

printf("  Entry point address:               0x");

addres = ptr[4] + '0';
if (addres == '1')
{
first_index = 26;
printf("80");
index = first_index;
while (index >= 22)
{
if (ptr[index] > 0)
printf("%x", ptr[index]);
else if (ptr[index] < 0)
printf("%x", 256 + ptr[index]);
index--;
}
if (ptr[7] == 6)
printf("00");
}
else if (addres == '2')
{
first_index = 26;
index = first_index;
while (index > 23)
{
if (ptr[index] >= 0)
printf("%02x", ptr[index]);
else if (ptr[index] < 0)
printf("%02x", 256 + ptr[index]);
index--;
}
}
printf("\n");
}

/**
* print_type - function that prints type.
* @ptr: pointer.
* Return: void prints type
*/
void print_type(char *ptr)
{
char t = ptr[16];

if (ptr[5] == 1)
t = ptr[16];
else
t = ptr[17];

printf("  Type:                              ");
switch (t)
{
case 0:
printf("NONE (No file type)\n");
break;
case 1:
printf("REL (Relocatable file)\n");
break;
case 2:
printf("EXEC (Executable file)\n");
break;
case 3:
printf("DYN (Shared object file)\n");
break;
case 4:
printf("CORE (Core file)\n");
break;
default:
printf("<unknown: %x>\n", t);
}
}

/**
* print_osabi - function prints osabi
* @ptr: pointer.
* Return: void prints osabi.
*/
void print_osabi(char *ptr)
{
char osabi = ptr[7];
printf("  OS/ABI:                            ");

switch (osabi)
{
case 0:
printf("UNIX - System V\n");
break;
case 2:
printf("UNIX - NetBSD\n");
break;
case 6:
printf("UNIX - Solaris\n");
break;
default:
printf("<unknown: %x>\n", osabi);
}
printf("  ABI Version:                       %d\n", ptr[8]);
}
/**
* print_version - function that prints version.
* @ptr: pointer.
* Return: void prints version.
*/
void print_version(char *ptr)
{
int version = ptr[6];

printf("  Version:                           %d", version);

if (version == EV_CURRENT)
printf(" (current)");

printf("\n");
}
/**
* print_data - a function that prints data.
* @ptr: pointer.
* Return: void prints data.
*/
void print_data(char *ptr)
{
char data = ptr[5];

printf("  Data:                              2's complement");
if (data == 1)
printf(", little endian\n");
else if (data == 2)
printf(", big endian\n");
}
/**
* print_magic - function that prints magic info.
* @ptr: pointer.
* Return: void prints magic info.
*/
void print_magic(char *ptr)
{
int magic_info;

printf("  Magic:  ");
magic_info = 0;
while (magic_info < 16)
{
printf(" %02x", ptr[magic_info]);
magic_info++;
}

printf("\n");
}
/**
* check_sys - function that check the version system.
* @ptr: pointer.
* Return: void check the version system.
*/
void check_sys(char *ptr)
{
char sys = ptr[4] + '0';

if (sys == '0')
exit(98);

printf("ELF Header:\n");
print_magic(ptr);

if (sys == '1')
printf("  Class:                             ELF32\n");
else if (sys == '2')
printf("  Class:                             ELF64\n");

print_data(ptr);
print_version(ptr);
print_osabi(ptr);
print_type(ptr);
print_addr(ptr);
}

/**
* check_elf -function that check if it is an elf file.
* @ptr: pointer.
* Return: 1 if it is an elf file. 0 if not.
*/
int check_elf(char *ptr)
{
int elf = (int)ptr[0];
char E = ptr[1];
char L = ptr[2];
char F = ptr[3];

if (elf == 127 && E == 'E' && L == 'L' && F == 'F')
return (1);
else
return (0);
}

/**
* main - function that check the code for alx scholars.
* @argc: number of arguments.
* @argv: arguments vector.
* Return: returns 0 code success.
*/
int main(int argc, char *argv[])
{
int file, read_file;
char ptr[27];

if (argc != 2)
{
printf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
exit(98);
}

file = open(argv[1], O_RDONLY);

if (file < 0)
{
dprintf(STDERR_FILENO, "Err: file can not be open\n");
exit(98);
}

lseek(file, 0, SEEK_SET);
read_file = read(file, ptr, 27);

if (read_file == -1)
{
dprintf(STDERR_FILENO, "Err: The file can not be read\n");
exit(98);
}

if (!check_elf(ptr))
{
dprintf(STDERR_FILENO, "Err: It is not an ELF\n");
exit(98);
}

check_sys(ptr);
close(file);

return (0);
}
