#include "monty.h"
/**
*pall - prints all the values on the stack, starting from the top of the stack
*@stack: the pointer to the head of the stack
*@line_number: file's line number
*Return : nothing
**/
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = NULL;

	if (!(*stack))
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
	if (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}
