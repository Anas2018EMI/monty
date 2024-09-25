#include "monty.h"

/* betty style doc for function open_and_read_file goes there */
/**
 * open_and_read_file - Entry point
 * @filename: first arg
 * Return: void
 */
void open_and_read_file(char *filename)
{
	FILE *file;
	char *line = NULL;
	size_t len = 0;
	unsigned int line_number = 0;
	char *opcode;
	char *arg;

	/* Open the file */
	file = fopen(filename, "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}

	/* Read the file line by line */
	while (getline(&line, &len, file) != -1)
	{
		line_number++;

		/* Parse the line into opcode and argument */
		opcode = strtok(line, " \t\n");
		if (!opcode || opcode[0] == '#')
		{
			continue;
		}
		arg = strtok(NULL, " \t\n");

		/* Set the global argument variable */
		global.arg = arg;

		/* Execute the opcode */
		execute_opcode(&global.stack, opcode, line_number);
	}
	free(line);
	fclose(file);
	free_stack(&global.stack);
}

