#ifndef MONTY_H
#define MONTY_H

#define  _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* Data structures */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* Global variables */
extern stack_t *global_stack;
extern char *global_arg;

/* Function prototypes */
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void (*get_op_func(char *opcode))(stack_t **, unsigned int);
void execute_opcode(stack_t **stack, char *opcode, unsigned int line_number);
void free_stack(stack_t **stack);
void handle_error(int error_code, unsigned int line_number);
void open_and_read_file(char *filename);

#endif /* MONTY_H */