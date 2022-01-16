#include "monty.h"
/**
*swap - prints all the values on the stack, starting from the top of the stack
*@stack: the pointer to the head of the stack
*@line_number: file's line number
*Return : nothing
**/
void pcr(stack_t **stack, unsigned int line_number)
{
    fprintf(stdout,"%d\n", (*stack)->n);
    return (0);
}