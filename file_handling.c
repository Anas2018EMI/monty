#include "monty.h"

/* betty style doc for function open_and_read_file goes there */
/**
 * open_and_read_file - Entry point
 * @filename: first arg
 * Return: void
 */

#include <stdio.h>
#include "monty.h"

void open_and_read_file(char *filename)
{
	FILE *file;
	char *line = NULL;
	size_t len = 0;
	unsigned int line_number = 0;
	char *opcode;
	char *arg;

	file = fopen(filename, "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}

	while (getline(&line, &len, file) != -1)
	{
		line_number++;

		opcode = strtok(line, " \t\n");
		if (!opcode || opcode[0] == '#')
		{
			continue;
		}
		arg = strtok(NULL, " \t\n");

		global.arg = arg;

		execute_opcode(&global.stack, opcode, line_number);
	}

	free(line);
	fclose(file);

	free_stack(&global.stack);
}
