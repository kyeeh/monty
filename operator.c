
#include "monty.h"
/**
 * operator - Like The Matrix but with Monty operations.
 * @monty_bytecode: monty_bytecode.
 */


void operator(void)
{
	int i;
	instruction_t operations[] = {/*
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"nop", _nop},
		{"add", _add},
		{"sub", _sub},
		{"div", _div},
		{"mul", _mul},*/
		{NULL, NULL}
	};

	for (i = 0; operations[i].opcode; i++)
	{
		if (operations[i].opcode == wv.tokens[0])
		{
			operations[i].f(&(wv.stack), wv.line_number);
		}
	}
}
