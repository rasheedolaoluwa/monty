#include "monty.h"
/**
* free_stack - frees a doubly linked list
* @head: head of the stack
*/
void free_stack(stack_t *head)
{
	stack_t *auv;

	auv = head;
	while (head)
	{
		auv = head->next;
		free(head);
		head = auv;
	}
}

