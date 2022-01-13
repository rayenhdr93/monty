#include "monty.h"
/**
* push -Insert new node at the beginning of the stack
* @top:is the pointer to the head of stack
* @line_num: file's line number
* @n: the data integer
* Return: nothing
*/
void push(stack_t **top, unsigned int line_num)
{
	stack_t *new;

	if (top == NULL)
	{
	fprintf(stderr, "L%i: usage: push integer,\n", line_num);
 	exit(EXIT_FAILURE);
	}

	new = malloc(sizeof(stack_t));
	if (new == NULL)
		exit(EXIT_FAILURE);
	new->n = line_num;
	new->prev = NULL;
	new->next = *top;

	if (*top != NULL)
	{
	(*top)->prev = new;
	}
	*top = new;
}
