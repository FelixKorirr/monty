#include "monty.h"

/**
 * add_node - adds node to head stack
 * @head: head pointer
 * @n: value
 * Return: nothing
 * korir codes
 */

void add_node(stack_t **head, int n)
{

	stack_t *new, *y;

	y = *head;
	new = malloc(sizeof(stack_t));

	if (new == NULL)
	{ 
		printf("Error\n");
		exit(0); 
	}
	if (y)
		y->prev = new;

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
}
