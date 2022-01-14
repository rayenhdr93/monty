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

	if (!(*stack))
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	tmp = *stack;
	if (*stack == NULL)
		return;
	fprintf(stdout,"%d\n", tmp->n);
}
