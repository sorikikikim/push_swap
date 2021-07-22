#include "push_swap.h"

int find_node(t_stack *stack, int index)
{
	t_node *find;
	int	i;

	i = -1;
	find = (t_node *)malloc(sizeof(t_node));
	find = stack->top;
	while (++i < index - 1)
		find = find->next;
	return (find->value);
}