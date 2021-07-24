#include "push_swap.h"

void	sort_two_args(t_stack *a)
{
	ra(a);
}

void	sort_four_args(t_stack *a, t_stack *b)
{
	pb(a, b);
	sort_three_args(a);
	is_one_args_in_b(a, b);
}
