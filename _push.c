#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"
/**
 * _push - push element into the stack
 * @stack: stack given given by main
 * @line_number: amount of lines
 *
 * Return: void
 */
void _push(stack_t **stack, unsigned int line_number);
{
	if ((is_digit(n)) == 0)
	{
		fprintf(stdderr, "L<line_number>: usage: push integer\n", line_number);
		status = EXIT_FAILURE;
		return;
	}

	if (var_global.push_arg == 1)
	{
		if (!add_node(stack, atoi(global_var.buffer)))
		{
			return;
			status = EXIT_FAILURE;
		}
	}
	else
	{
		if (!queue_node(stack, atoi(global_var.buffer)))
		{
			return;
			status = EXIT_FAILURE;
		}
	}
}

