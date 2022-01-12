#include "monty.h"

/*
*
*/

void pall(stack_t *stack)
{
	if (stack == NULL)
		return;

	while (stack != NULL)
	{
	printf("%d\n", stack->n);
	stack = stack->next;
	}
}
