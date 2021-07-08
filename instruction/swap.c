#include "push_swap.h"

void	swap_a(t_stack *a)
{
	int up;
	int down;

	up = pop_node(a);
	down = pop_node(a);
	push_node(a, up);
	push_node(a, down);
}

void	sa(t_stack *a)
{
	ft_putendl_fd("sa", 1);
	swap_a(a);
}

void	swap_b(t_stack *b)
{
	int up;
	int down;

	up = pop_node(b);
	down = pop_node(b);
	push_node(b, up);
	push_node(b, down);
}

void	sb(t_stack *b)
{
	ft_putendl_fd("sb", 1);
	swap_b(b);
}

void	ss(t_stack *a, t_stack *b)
{
	ft_putendl_fd("ss", 1);
	swap_a(a);
	swap_b(b);
}