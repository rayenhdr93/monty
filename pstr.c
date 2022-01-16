#include "monty.h"
/**
 * pchar - prints the int at the top of the stack as char
 * @stack: stack
 * @line_number: count
 * Return: 0
*/
void pstr(stack_t **stack, unsigned int __attribute__((unused)) line_number)
{
    stack_t *tmp = NULL;

    tmp = (*stack);
    while (tmp)
	{
		if ((tmp->n <= 0) || (tmp->n > 127))
        {
			break;
        }
        putchar((char) tmp->n);
		tmp = tmp->next;
	}
    putchar('\n');
}