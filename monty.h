#ifndef MONTY_H_
#define MONTY_H_

/* Libraries */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/* Data Structures */
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct working_values - variables required for operations
 * @line: string for Monty bytecode lines.
 * @stack: required for operations.
 * @tokens: operation and values extracted from lines.
 * 
 * Description: memory struct for working values
 */
typedef struct working_values
{
	char *line;
	stack_t *stack;
	char **tokens;
	unsigned int line_number;
} working_values_t;

extern working_values_t wv;

/* Error Messages */
#define BAD_ARGV "USAGE: monty file\n"
#define BAD_FILE "Error: Can't open file %s\n"

/* Prototypes */
void close_file(FILE *monty_bytecode);
int parse_file(FILE *monty_bytecode);
void get_tokens(void);


#endif  /* MONTY_H_ */
