#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

global_var global = {NULL, 0, 0, NULL};


/**
* main - function for monty code interpreter
* @argc: argument count
* @argv: argument value
*
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *argument;
	FILE *file;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int line_number = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	global.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		argument = NULL;
		read_line = getline(&argument, &size, file);
		global.argument = argument;
		argument++;
		if (read_line > 0)
		{
			_execute(argument, &stack, line_number, file);
		}
		free(argument);
	}
	free_dlistint(stack);
	fclose(file);
return (0);
}
