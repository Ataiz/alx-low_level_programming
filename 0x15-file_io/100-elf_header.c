#include "main.h"

/**
 * main - The entry point for the program to get the header of ELF file
 * @ac: The number of arguments
 * @av: The pointer to array of arguments
 * Return: Returns 1 on success and error code on failure
 */
int main(int ac, char *av[])
{
	printf("argc:%d, argv:%p\n", ac, (void *)*av);
	return (1);
}
