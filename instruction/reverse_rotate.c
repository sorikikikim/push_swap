#include "push_swap.h"

void	reverse_rotate_a(t_stack *a)
{
	if (a->top == NULL)
		return ;
	a->top = a->top->prev;
}

void	rra(t_stack *a)
{
	ft_putendl_fd("rra", 1);
	reverse_rotate_a(a);
}

void	reverse_rotate_b(t_stack *b)
{
	if (b->top == NULL)
		return ;
	b->top = b->top->prev;
}

void	rrb(t_stack *b)
{
	ft_putendl_fd("rrb", 1);
	reverse_rotate_b(b);
}

void	rrr(t_stack *a, t_stack *b)
{
	ft_putendl_fd("rrr", 1);
	reverse_rotate_a(a);
	reverse_rotate_b(b);
}
