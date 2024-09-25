#include "monty.h"

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
                global_arg = arg;

                /* Execute the opcode */
                execute_opcode(&global_stack, opcode, line_number);
        }

        /* Free the line buffer and close the file */
        free(line);
        fclose(file);

        /* Free the stack */
        free_stack(&global_stack);
}
