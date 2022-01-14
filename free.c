#include "monty.h"
void free_z(stack_t *st)
{
	stack_t *tmp = NULL;

    while (st)
	{
		tmp = st->next;
		free(st);
		st = tmp;
	}
}