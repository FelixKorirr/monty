#include "monty.h"

/**
 * free_stack - frees a linked list
 * @head: head pointer
 * korir codes
 */

void free_stack(stack_t *head)
{
	stack_t *y;

	y = head;
	while (head)
	{
		y = head->next;
		free(head);
		head = y;
	}
}
