#include "monty.h"

/**
 * push_func - adds node to top of stack
 * @head: head pointer
 * @x: line no
 * Return: nothing
 * korir codes
 */

void push_func(stack_t **head, unsigned int x)
{
	int n, i = 0, j = 0;

	if (newnode.arg)
	{
		if (newnode.arg[0] == '-')
			i++;
		for (; newnode.arg[i] != '\0'; i++)
		{
			if (newnode.arg[i] > 57 || newnode.arg[i] < 48)
				j = 1; }
		if (j == 1)
		{ 
			fprintf(stderr, "L%d: usage: push integer\n", x);
			fclose(newnode.ptr);
			free(newnode.value);
			free_stack(*head);
			exit(EXIT_FAILURE); 
		}
	}
	else
	{ 
		fprintf(stderr, "L%d: usage: push integer\n", x);
		fclose(newnode.ptr);
		free(newnode.value);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	n = atoi(newnode.arg);

	if (newnode.lifi == 0)
	{
		add_node(head, n);
	}
	else
	{
		add_queue(head, n);
	}
}
