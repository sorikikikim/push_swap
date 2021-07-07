#include "push_swap.h"

void	rra(t_stack *a)
{
	ft_putendl_fd("rra", 1);
	a->top = a->top->prev;
}

void	rrb(t_stack *b)
{
	ft_putendl_fd("rrb", 1);
	b->top = b->top->prev;
}

void	rrr(t_stack *a, t_stack *b)
{
	ft_putendl_fd("rrr", 1);
	rra(a);
	rrb(b);
}