#include "monty.h"
/**
*swap - prints all the values on the stack, starting from the top of the stack
*@stack: the pointer to the head of the stack
*@line_number: file's line number
*Return : nothing
**/
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = NULL;
    int x = 0, j = 0;

	if (!((*stack) && (*stack)->next))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
    tmp = *stack;
    x = tmp->n;
    tmp = tmp->next;
    j = tmp->n;
    (*stack)->n = j;
    *stack = (*stack)->next;
    (*stack)->n = x;
    *stack = (*stack)->prev;

}
