#include "monty.h"

/* Global variable */
global_t global = {NULL, NULL};

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * @argc: first arg
 * @argv: second arg
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	open_and_read_file(argv[1]);

	return (EXIT_SUCCESS);
}
