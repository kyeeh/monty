#include "monty.h"
/**
 * main -  Start Monty file interpreter.
 * @argc: argument counter.
 * @argv: argument vector.
 * Return: 0 on failure, 1 on success.
 */
int main(int argc, char **argv)
{
	FILE *input_file;

	if (argc == 2)
	{
		input_file = fopen(argv[1], "r");
		if (input_file)
		{
			/* parse file */
		}
	}
	else
	{
		dprintf(STDERR_FILENO, BAD_ARGV);
		return (0);
	}
	return (1);
}
