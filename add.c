#include "monty.h"
/**
*swap - prints all the values on the stack, starting from the top of the stack
*@stack: the pointer to the head of the stack
*@line_number: file's line number
*Return : nothing
**/
void add(stack_t **stack, unsigned int line_number)
{
    int x = 0;

	if (!((*stack) && (*stack)->next))
	{
		fprintf(stderr, "L%d: can't add, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
    x = x + (*stack)->n;
	(*stack) = (*stack)->next;
	x += (*stack)->n;
    (*stack) = (*stack)->next;
    fprintf(stdout,"%d\n", x);
}
