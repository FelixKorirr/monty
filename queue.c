#include "monty.h"

/**
 * queue_func - prints the top
 * @head: head pointer
 * @counter: line_no
 * Return: nothing
 * korir codes
 */

void queue_func(stack_t **head, unsigned int x)
{
	(void)head;
	(void)x;
	newnode.lifi = 1;
}

/**
 * add_queue - adds node to tail stack
 * @n: value
 * @head: head pointer
 * Return: nothing
 * korir codes
 */

void add_queue(stack_t **head, int n)
{
	stack_t *new, *y;

	y = *head;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error\n");
	}
	new->n = n;
	new->next = NULL;

	if (y)
	{
		while (y->next)
			y = y->next;
	}

	if (!y)
	{
		*head = new;
		new->prev = NULL;
	}

	else
	{
		y->next = new;
		new->prev = y;
	}
}
