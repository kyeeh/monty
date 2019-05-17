#include "monty.h"
/**
 * main - Start Monty file interpreter.
 * @argc: argument counter.
 * @argv: argument vector.
 * Return: EXIT_FAILURE on failure, EXIT_SUCCESS on success.
 */
int main(int argc, char **argv)
{
	FILE *monty_bytecode;
	/* working_values_t *wv = malloc(sizeof(working_values_t *)); */
	working_values_t wv = {NULL, NULL, NULL, 1};

	(void)wv;
	(void)argc;
	/* if (argc == 2)
	{*/
		monty_bytecode = fopen(argv[1], "r");
		if (parse_file(monty_bytecode))
			return (EXIT_SUCCESS);
		else
			dprintf(STDERR_FILENO, BAD_FILE, argv[1]);
	/*}
	else
		dprintf(STDERR_FILENO, BAD_ARGV);
	close_file(monty_bytecode);
	*/
	return (EXIT_FAILURE);
}
