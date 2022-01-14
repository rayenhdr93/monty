#include "monty.h"
/**
* push -Insert new node at the beginning of the stack
* @top:rints all the values on the stack, starting from the top of the stack
* @line_num: file's line number
* Return: nothing
*/
void push(stack_t **top, unsigned int line_num)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (!new)
	{
		fprintf(stderr, "Error:malloc failed\n");
		free_z(*top);
		exit(EXIT_FAILURE);
	}
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
