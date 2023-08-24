#include "monty.h"

/**
 * pop_func - prints top value
 * @head: head pointer
 * @x: line_number
 * Return: nothing
 * korir codes
 */

void pop_func(stack_t **head, unsigned int x)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", x);
		fclose(newnode.ptr);
		free(newnode.value);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	h = *head;
	*head = h->next;

	free(h);
}
