#include "push_swap.h"

static void	up_2_down_2(t_stack *a, t_stack *b)
{
	ra(a);
	ra(a);
	pa(a, b);
	rra(a);
	rra(a);
}

static void	is_two_args_in_b(t_stack *a, t_stack *b)
{
	if (b->top->value < a->top->value)
		pa(a, b);
	else if (b->top->value > a->top->value
	&& b->top->value < a->top->next->value)
	{
		ra(a);
		pa(a, b);
		rra(a);
	}
	else if (b->top->value > a->top->next->value
	&& b->top->value < a->top->prev->value)
		up_2_down_2(a, b);
	else if (b->top->value > a->top->prev->value)
	{
		pa(a, b);
		ra(a);
	}
}

static void	is_one_args_in_b(t_stack *a, t_stack *b)
{
	if (b->top->value < a->top->value)
		pa(a, b);
	else if (b->top->value > a->top->value
	&& b->top->value < a->top->next->value)
	{
		ra(a);
		rra(a);
	}
	else if (b->top->value > a->top->next->value
	&& b->top->value < a->top->next->next->value)
		up_2_down_2(a, b);
	else if (b->top->value > a->top->next->next->value
	&& b->top->value < a->top->prev->value)
	{
		rra(a);
		pa(a, b);
		ra(a);
		ra(a);
	}
	else if (b->top->value > a->top->prev->value)
	{
		pa(a, b);
		ra(a);
	}
}


void	sort_five_args(t_stack *a, t_stack *b)
{
	pb(a, b);
	pb(a, b);
	sort_three_args(a);
	is_two_args_in_b(a, b);
	is_one_args_in_b(a, b);
}