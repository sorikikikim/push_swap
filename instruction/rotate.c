#include "push_swap.h"

void	ra(t_stack *a)
{
	ft_putendl_fd("ra", 1);
	a->top = a->top->next;
}

void	rb(t_stack *b)
{
	ft_putendl_fd("rb", 1);
	b->top = b->top->next;
}

void	rr(t_stack *a, t_stack *b)
{
	ft_putendl_fd("rr", 1);
	ra(a);
	rb(b);
}