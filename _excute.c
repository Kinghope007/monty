#include "monty.h"

/**
 * _excute - function that excute the opcode
 * @stack: head stack linkedlist
 * @line_number: line count
 * @file: pointer to monty file stream
 * @argument: pointer line count
 *
 * Return:
 */
int _execute(char *argument, stack_t **stack, unsigned line_number, FILE *file)
{
	instruction_t opst[] = {
				{"push", _push}, {"pall", _pall}, {"pint", _pint},
				{"pop", _pop},
				{"swap", _swap},
				{"add", _add},
				{"nop", _nop},
				{"sub", _sub},
				{"div", _div},
				{"mul", _mul},
				{"mod", _mod},
				{"pchar", _pchar},
				{"pstr", _pstr},
				{"rotl", _rotl},
				{"rotr", _rotr},
				{"queue", _queue},
				{"stack", _stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(argument, " \n\t");
	if (op && op[0] == '#')
		return (0);
	global.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, line_number);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", line_number, op);
		fclose(file);
		free(argument);
		free_dlistint(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
