#include "monty.h"
/**
 *sub_func - performs substration
 *@head: head pointer
 *@x: line no.
 *Return: nothing
 *korir codes
 */
void sub_func(stack_t **head, unsigned int x)
{
	stack_t *y;
	int a;
	int nodes;

	y = *head;
	for (nodes = 0; y != NULL; nodes++)
		y = y->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", x);
		fclose(newnode.ptr);
		free(newnode.value);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	y = *head;
	a = y->next->n - y->n;
	y->next->n = a;
	*head = y->next;
	free(y);
}
