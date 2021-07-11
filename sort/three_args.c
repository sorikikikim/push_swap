#include "push_swap.h"

void	sort_three_args(t_stack *a)
{
	int	top;
	int	mid;
	int	bottom;

	top = a->top->value;
	mid = a->top->next->value;
	bottom = a->top->prev->value;
	if (bottom > top && bottom < mid)
	{
		rra(a);
		sa(a);
	}
	else if (bottom < top && bottom > mid)
		ra(a);
	else if (top > mid && top < bottom)
		sa(a);
	else if (top < mid && top > bottom)
		rra(a);
	else if (mid < top && mid > bottom)
	{
		ra(a);
		sa(a);
	}
}
