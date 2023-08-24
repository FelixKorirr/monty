#include "monty.h"

/**
 * execute - executes the opcode
 * @stack: head linked list - stack
 * @counter: line_counter
 * @ptr: pointer to monty file
 * @value: line content
 * Return: nothing
 * korir codes
 */

int execute(char *value, stack_t **stack, unsigned int counter, FILE *ptr)
{
	instruction_t opst[] = {
		{"push", push_func}, {"pall", pall_func}, {"pint", pint_func},
		{"pop", pop_func},
		{"swap",swap_func},
		{"add", add_func},
		{"nop", nop_func},
		{"sub", sub_func},
		{"div", div_func},
		{"mul", mul_func},
		{"mod", mod_func},
		{"pchar", pchar_func},
		{"pstr", pstr_func},
		{"rotl", rotl_func},
		{"rotr", rotr_func},
		{"queue", queue_func},
		{"stack", stack_func},
		{NULL, NULL}
	};
	unsigned int j = 0;
	char *op;

	op = strtok(value, " \n\t");
	if (op && op[0] == '#')
		return (0);

	newnode.arg = strtok(NULL, " \n\t");

	while (opst[j].opcode && op)
	{
		if (strcmp(op, opst[j].opcode) == 0)
		{	opst[j].f(stack, counter);
			return (0);
		}
		j++;
	}

	if (op && opst[j].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(ptr);
		free(value);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
