#include "monty.h"

/**
  *f_sub- subtraction
  *@head: stack head
  *@counter: line number
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *auv;
	int subs, nodes;

	auv = *head;
	for (nodes = 0; auv != NULL; nodes++)
		auv = auv->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	auv = *head;
	subs = auv->next->n - auv->n;
	auv->next->n = subs;
	*head = auv->next;
	free(auv);
}

/**
 * f_mul - multiplies the top two elements of the stack.
 * @head: stack head
 * @counter: line number
 * Return: no return
*/
void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, auv;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	auv = h->next->n * h->n;
	h->next->n = auv;
	*head = h->next;
	free(h);
}

/**
 * f_mod - computes the division of the second top element
 * of the stack by the first element of the stack
 * @head: stack head
 * @counter: line number
 * Return: no return
*/
void f_mod(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, auv;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	auv = h->next->n % h->n;
	h->next->n = auv;
	*head = h->next;
	free(h);
}

/**
 * f_div - divides the top two elements of the stack.
 * @head: stack head
 * @counter: line number
 * Return: no return
*/
void f_div(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, auv;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	auv = h->next->n / h->n;
	h->next->n = auv;
	*head = h->next;
	free(h);
}

/**
 * f_add - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line number
 * Return: no return
*/
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, auv;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	auv = h->n + h->next->n;
	h->next->n = auv;
	*head = h->next;
	free(h);
}

