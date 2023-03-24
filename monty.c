#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

/**
 * main - driver function for monty program
 * @ac: int num of arguments
 * @av: opcode file
 * Return: 0
 */
int main(int ac, char **av)
{
	stack_t *stack = NULL;
	FILE *file;
	size_t bef_len = 0;
	char *buffer = NULL;
	unsigned int line_number = 1;

	global.push_arg = 1;
	if (ac != 2)
		error_usage();
	
	read_file(av[1], &stack);
    /* recordar liberar memorias */
	file = fopen(av[1], "r");

	if (!file)
		file_error(av[1]);
	while (getline(&buffer, &bef_len, file) != -1)
	{
		if (status)
			break;
		if (*buffer == '\n')
		{
			line_number++;
			continue;
		}
		global.buffer = strtok(NULL, " \t\n");
		opcode(&stack, str, line_number);
		line_number++;
	}
	free(buffer);
	free_stack(stack);
	fclose(file);
	exit(status);
}
