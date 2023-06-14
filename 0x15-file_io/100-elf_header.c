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
 * check_elf- checks if a file is an ELF file
 * Description: if file is not an ELF file, exit 98
 * @e_ident: A pointer to an array containing the ELF magic numbers
 **/

void check_elf(unsigned char *e_ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e_ident[i] != 127 &&
		e_ident[i] != 'E' &&
		e_ident[i] != 'L' &&
		e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}


/**
 * print_magic- prints the magic numbers of an ELF header
 * Description: magic unmbers are separated by space
 * @e_ident: A pointer to an array containing the ELF magic numbers
 **/

void print_magic(unsigned char *e_ident)
{
	int i;

	printf("Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");

	}
}


/**
 * print_class- prints the class of an ELF header
 * Description: prints the class on an ELF header
 * @e_ident: A pointer to an array containing the ELF class
 **/

void print_class(unsigned char *e_ident)
{
	printf("Class: ");
	switch (e_ident[EI_CLASS])
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
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}


/**
 * print_data- prints data of an ELF class
 * Description: prints data of an ELF class
 * @e_ident: A pointer to an array containing the ELF class
 **/


void print_data(unsigned char *e_ident)
{
	printf("Data: ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_DATA]);
	}
}


/**
 * print_version- prints the version of ELF header
 * Description: prints version of ELF header
 * @e_ident: A pointer to an array containing the ELF version
 **/

void print_version(unsigned char *e_ident)
{
	printf("Version: %d\n", e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
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
 * close_elf- closes an ELF file
 * Description: if file can't be closed exit 98
 * @elf: the file descriptor of the ELF file
 **/

void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
		exit(98);
	}
}



/**
 * main- displays the information contained in the
 * ELF header at the strt of an ELF file
 * Description: if the file is not an ELF file or
 * the function fails, - exit code 98
 * Return: 0 on success
 * @argc: number of arguements supplied
 * @argv: array of pointers to arguements
 **/

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int opens, reads;

	opens = open(argv[1], O_RDONLY);
	if (opens == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read this file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(opens);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	reads = read(opens, header, sizeof(Elf64_Ehdr));
	if (reads == -1)
	{
		free(header);
		close_elf(opens);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);

	free(header);
	close_elf(opens);
	return (0);
}
