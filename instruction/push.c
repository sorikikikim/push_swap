#include "push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	ft_putendl_fd("pa", 1);
	if (b->top == NULL)
		return ;
	push_node(a, pop_node(b));
}

void	pb(t_stack *a, t_stack *b)
{
	ft_putendl_fd("pb", 1);
	if (a->top == NULL)
		return ;
	push_node(b, pop_node(a));
}
