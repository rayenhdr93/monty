#include "monty.h"
/**
 * pchar - prints the int at the top of the stack as char
 * @stack: stack
 * @line_number: count
 * Return: 0
*/
void pchar(stack_t **stack, unsigned int line_number)
{
	if (!stack || !(*stack))
{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
}
	if (!(((((*stack)->n) >= 65) && (((*stack)->n) <= 90)) || ((((*stack)->n) >= 97) && (((*stack)->n) <= 122))))
{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
}
	printf("%c\n", (*stack)->n);
}