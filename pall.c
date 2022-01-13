#include "monty.h"
/*
*
*/
void pall(stack_t **stack, 
unsigned int __attribute__((unused)) line_number)
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
}
