#include "monty.h"
/**
*pint - prints all the values on the stack, starting from the top of the stack
*@stack: the pointer to the head of the stack
*@line_number: file's line number
*Return : nothing
**/
void pint(stack_t **stack, unsigned int __attribute__((unused)) line_number)
{
	stack_t *tmp;

	tmp = *stack;
	if (*stack == NULL)
		return;
	printf("%d\n", tmp->n);
}
