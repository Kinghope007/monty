#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h
/**
 * error_usage - print usage message and exits
 *
 * return: nothing
 */
void error_usage(void)
{
	fprintf(stderr, "USAGE: minty file\n");
	exit(EXIT_FAILURE);
}

/**
 * file_error - print file error messsage and exits
 * @av: argv given by main
 *
 * Return: nothing
 */
void file_error(char *av)
{
	fprintf(stderr, "Error: can't open file %s\n", av);
	exit(EXIT_FAILURE);
}

global_var var_global;
/**
 * main - driver function for monty program
 * @ac: int num of arguments
 * @av: opcode file
 * Return: 0
 */
int main(int ac, char **av)
{
	stack_t *stack;

	stack = NULL;
	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	read_file(av[1], &stack);
    /* recordar liberar memorias */
	free_dlistint(stack);
	return (0);
}
