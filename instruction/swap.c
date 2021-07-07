#include "push_swap.h"

void	sa(t_stack *a)
{
	int up;
	int down;

	ft_putendl_fd("sa", 1);
	up = pop_node(a);
	down = pop_node(a);
	push_node(a, up);
	push_node(a, down);
}

void	sb(t_stack *b)
{
	int up;
	int down;

	ft_putendl_fd("sb", 1);
	up = pop_node(b);
	down = pop_node(b);
	push_node(b, up);
	push_node(b, down);
}

void	ss(t_stack *a, t_stack *b)
{
	ft_putendl_fd("ss", 1);
	sa(a);
	sb(b);
}