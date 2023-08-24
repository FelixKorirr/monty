#include "monty.h"

point_t newnode = {NULL, NULL, NULL, 0};

/**
 * main - monty code interpreter
 * @argc: no of arguments
 * @argv: monty file location
 * Return: 0(Success)
 */

int main(int argc, char *argv[])
{
	char *value;
	FILE *ptr;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int counter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty ptr\n");
		exit(EXIT_FAILURE);
	}
	ptr = fopen(argv[1], "r");
	newnode.ptr = ptr;
	if (!ptr)
	{
		fprintf(stderr, "Error: Can't open ptr %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		value = NULL;
		read_line = getline(&value, &size, ptr);
		newnode.value = value;
		counter++;
		if (read_line > 0)
		{
			execute(value, &stack, counter, ptr);
		}
		free(value);
	}

	free_stack(stack);
	fclose(ptr);
	return (0);
}
