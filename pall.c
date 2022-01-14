#include "monty.h"
/**
*pall - prints all the values on the stack, starting from the top of the stack
*@stack: the pointer to the head of the stack
*@line_number: file's line number
*Return : nothing
**/

void pall(stack_t **stack, unsigned int __attribute__((unused)) line_number)
{
	stack_t *tmp;

	tmp = *stack;
	if (stack == NULL)
		return;
	printf("%d\n", tmp->n);
	while (tmp->next)
	{
		tmp = tmp->next;
		printf("%d\n", tmp->n);
	}
	printf("0\n");
}
