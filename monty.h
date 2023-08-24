#ifndef monty_h
#define monty_h

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <ctype.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct point_s - new data type
 * @arg: value
 * @ptr: pointer to monty file
 * @value: value of line
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct point_s
{
	char *arg;
	FILE *ptr;
	char *value;
	int lifi;
}  point_t;
extern point_t newnode;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void div_func(stack_t **head, unsigned int x);
void sub_func(stack_t **head, unsigned int x);
void add_func(stack_t **head, unsigned int x);
void mul_func(stack_t **head, unsigned int x);
void mod_func(stack_t **head, unsigned int x);

#endif
