#include "push_swap.h"

t_node	*create_node(int data)
{
	t_node *new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	new_node->value = data;
	new_node->prev = NULL;
	new_node->next = NULL;
}

void	append_node(t_stack *stack, t_node *new_node)
{
	t_node	*tail;

	if ((stack->head) == NULL)
	{
		stack->size = 1;
		stack->head = new_node;
		(new_node)->prev = new_node;
		(new_node)->next = new_node;
	}
	else
	{
		stack->size++;
		tail = stack->head->prev;
		new_node->next = stack->head;
		new_node->prev = tail;
		tail->next = new_node;
		stack->head->prev = new_node;
	}
}
