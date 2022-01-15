#include "monty.h"
/**
*swap - prints all the values on the stack, starting from the top of the stack
*@stack: the pointer to the head of the stack
*@line_number: file's line number
*Return : nothing
**/
void mult(stack_t **stack, unsigned int line_number)
{
    int x = 0;
	stack_t *tmp = NULL;

	if (!((*stack) && (*stack)->next))
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		free_z(*stack);
		exit(EXIT_FAILURE);
	}
    x += (*stack)->n;
	tmp = (*stack)->next;
	free(*stack);
    (*stack) = tmp;
	(*stack)->prev = NULL;
}
