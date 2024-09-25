#include "monty.h"

/* Global variables */
stack_t *global_stack = NULL;
char *global_arg = NULL;

int main(int argc, char **argv)
{
        /* Check for correct usage */
        if (argc != 2)
        {
                fprintf(stderr, "USAGE: monty file\n");
                exit(EXIT_FAILURE);
        }

        /* Open and read the file */
        open_and_read_file(argv[1]);

        return (EXIT_SUCCESS);
}
