#include "monty.h"
/**
 * f_queue - prints the top
 * @head: stack head
 * @counter: line number
 * Return: no return
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @head: head of the stack
 * Return: no return
*/
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *auv;

	auv = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (auv)
	{
		while (auv->next)
			auv = auv->next;
	}
	if (!auv)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		auv->next = new_node;
		new_node->prev = auv;
	}
}

