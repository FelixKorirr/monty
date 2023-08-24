#include "monty.h"

/**
 *rotl_func- rotates stack to the top
 *@head: head pointer
 *@x: line no
 *Return: nothing
 *korir codes
 */

void rotl_func(stack_t **head,  __attribute__((unused)) unsigned int x)
{
	stack_t *current = *head, *y;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}

	y = (*head)->next;
	y->prev = NULL;

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = *head;
	(*head)->next = NULL;
	(*head)->prev = current;
	(*head) = y;
}
