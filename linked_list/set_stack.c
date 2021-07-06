#include "push_swap.h"

t_stack	*init_stack(void)
{
	t_stack *stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->size = 0;
	stack->head = NULL;
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

void	delete_node(t_node *head, t_node *delete)
{
	t_node *temp;

	if (head == delete)
	{
		head = delete->next;
		if (head != NULL)
			head->prev = NULL;
		delete->prev = NULL;
		delete->next = NULL;
	}
	else
	{
		temp = delete;
		delete->prev->next = temp->next;
		if (delete->next != NULL)
			delete->next->prev = temp->prev;
		delete->prev = NULL;
		delete->next = NULL;
	}
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
