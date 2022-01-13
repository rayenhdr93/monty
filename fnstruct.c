#include "monty.h"
/**
 * add_dnodeint - hi
 * @head:hi
 * @n:hi
 * Return: hi
 */
stack_t *add_dnodeint(stack_t **head, const int n)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (!new)
		return (0);
	if (head == NULL)
		return (0);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (new);
}