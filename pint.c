#include "monty.h"
/**
*pop - prints all the values on the stack, starting from the top of the stack
*@stack: the pointer to the head of the stack
*@line_number: file's line number
*Return : nothing
**/

void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

		
	tmp = *stack;
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty", line_number);
		exit(EXIT_FAILURE);
	}
	fprintf(stdout,"%d\n", tmp->n);
}
