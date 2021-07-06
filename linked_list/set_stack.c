#include "push_swap.h"

t_stack	*init_stack(void)
{
	t_stack *stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->size = 0;
	stack->top = NULL;
	return (stack);
}

t_node	*create_node(int data)
{
	t_node *new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->value = data;
	new_node->prev = NULL;
	new_node->next = NULL;
	return (new_node);
}

void	pop_node(t_stack *stack)
{
	t_node *temp;
	if (stack->size == 0)
		print_error();
	else if (stack->size == 1)
	{
		free(stack->top);
		stack->size--;
		stack->top = NULL;
	}
	else
	{
		temp = stack->top->prev;
		stack->top = stack->top->next;
		free(stack->top->prev);
		stack->top->prev = temp;
		temp->next = stack->top;
	}
}

void	append_node(t_stack *stack, t_node *new_node)
{
	t_node	*bottom;

	if ((stack->top) == NULL)
	{
		stack->size = 1;
		stack->top = new_node;
		(new_node)->prev = new_node;
		(new_node)->next = new_node;
	}
	else
	{
		stack->size++;
		bottom = stack->top->prev;
		new_node->next = stack->top;
		new_node->prev = bottom;
		bottom->next = new_node;
		stack->top->prev = new_node;
	}
}

t_stack *put_element(t_stack *stack, int size, int *temp)
{
	t_node *new_node;
	int	i;

	i = 0;
	while (i < size)
	{
		new_node = create_node(temp[i]);
		if (!new_node)
			print_error();
		append_node(stack, new_node);
		i++;
	}
	return (stack);
}
