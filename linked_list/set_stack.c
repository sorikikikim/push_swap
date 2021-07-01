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
		append_node(stack, new_node);
		i++;
	}
	//printf("%d\n", stack[1]);
	//printf("%d\n", stack[2]);
	//printf("%d\n", stack[3]);
	return (stack);
}



/*

static void		connect_list(t_node **temp, t_node **node, t_stack **stack)
{
	if (!*node)
	{
		*node = *temp;
		(*stack)->top = *node;
	}
	else
	{
		(*node)->next = *temp;
		(*temp)->prev = *node;
		*node = (*node)->next;
	}
}

static int		set_node(char *argv, t_node **node, t_stack **stack)
{
	int		i;
	char	**arg;
	t_node	*temp;

	arg = ft_split(argv, ' ');
	if (!arg)
		return (0);
	i = -1;
	while (arg[++i])
	{
		temp = init_node();
		if (!temp)
			print_error();
		temp->value = ft_atoi(arg[i]);
		connect_list(&temp, node, stack);
		(*stack)->size++;
		free(arg[i]);
	}
	free(arg);
	return (1);
}

t_node			*put_element(t_stack **stack, int size, int **temp_stack)
{
	int		i;
	int		ret;
	t_node	*node;

	i = 0;
	node = NULL;
	while (++i < argc)
	{
		ret = set_node(argv[i], &node, stack);
		if (!ret)
			print_error();
	}
	if (!node->next)
		(*stack)->bottom = node;
	while (node->prev)
		node = node->prev;
	return (node);
}

*/