#include "monty.h"


/**
 * parse_file - Parses Monty bytecode file.
 * @monty_bytecode: monty_bytecode.
 * Return: 0 on failure, 58 on success.
 */

int parse_file(FILE *monty_bytecode)
{
	size_t size;
	int char_amount;

	char_amount = getline(&(wv.line), &size, monty_bytecode);
	while (char_amount > 0)
	{
		wv.line_number++;
		get_tokens();
		operator();
	}
	close_file(monty_bytecode);
	return (58);
}

/**
 * close_file - Close file.
 * @monty_bytecode: monty_bytecode.
 */
void close_file(FILE *monty_bytecode)
{
	fclose(monty_bytecode);
	monty_bytecode = NULL;
}

/**
 * get_tokens - get tokens from a string.
 * @str: String to parse.
 * Return: array of string or NULL.
 */


void get_tokens(void)
{
	int i = 0, size;
	char *token, *new_str;

	wv.tokens = &new_str;
	token = strtok(wv.line, " \t\n");
	while (token)
	{
		new_str = malloc(sizeof(char *));
		size = strlen(token);
		wv.tokens[i] = 
		dest = malloc(sizeof(char) * size);
		strcpy(dest, token);
		wv.tokens[i] = dest;
		token = strtok (NULL, " ,.-");
	}
}
