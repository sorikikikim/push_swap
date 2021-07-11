#include "push_swap.h"

void	rotate_a(t_stack *a)
{
	if (a->top == NULL)
		return ;
	a->top = a->top->next;
}

void	ra(t_stack *a)
{
	ft_putendl_fd("ra", 1);
	rotate_a(a);
}

void	rotate_b(t_stack *b)
{
	if (b->top == NULL)
		return ;
	b->top = b->top->next;
}

void	rb(t_stack *b)
{
	ft_putendl_fd("rb", 1);
	rotate_b(b);
}

void	rr(t_stack *a, t_stack *b)
{
	ft_putendl_fd("rr", 1);
	rotate_a(a);
	rotate_b(b);
}
