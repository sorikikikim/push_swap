#include "push_swap.h"

static void	add_in_four(t_stack *a, t_stack *b)
{
	if (a->top->value > a->top->next->value
		&& a->top->next->value < a->top->next->next->value)
	{
		ra(a);
		pa(a, b);
	}
	else if (a->top->next->value > a->top->next->next->value
		&& a->top->next->next->value < a->top->prev->value)
	{
		ra(a);
		ra(a);
		pa(a, b);
	}
	else if (a->top->next->next->value > a->top->prev->value
		&& a->top->prev->value < a->top->value)
	{
		rra(a);
		pa(a, b);
	}
	else
		pa(a, b);
}

static void	sort_in_five(t_stack *a)
{
	if (a->top->next->value < a->top->value
		&& a->top->next->value < a->top->next->next->value)
		ra(a);
	else if (a->top->next->next->value < a->top->next->value
		&& a->top->next->next->value < a->top->prev->prev->value)
	{
		ra(a);
		ra(a);
	}
	else if (a->top->prev->prev->value < a->top->next->next->value
		&& a->top->prev->prev->value < a->top->prev->value)
	{
		rra(a);
		rra(a);
	}
	else if (a->top->prev->value < a->top->prev->prev->value
		&& a->top->prev->value < a->top->value)
		rra(a);
}

static void	is_two_args_in_b(t_stack *a, t_stack *b)
{
	int	input;

	input = b->top->value;
	if (input < a->top->value)
		pa(a, b);
	else if (input > a->top->value
		&& input < a->top->next->value)
	{
		ra(a);
		pa(a, b);
	}
	else if (input > a->top->next->value
		&& input < a->top->prev->value)
	{
		rra(a);
		pa(a, b);
	}
	else if (input > a->top->prev->value)
		pa(a, b);
}

static void	is_one_args_in_b(t_stack *a, t_stack *b)
{
	if (b->top->value > a->top->value
		&& b->top->value < a->top->next->value)
	{
		ra(a);
		pa(a, b);
	}
	else if (b->top->value > a->top->next->value
		&& b->top->value < a->top->next->next->value)
	{
		ra(a);
		ra(a);
		pa(a, b);
	}
	else if (b->top->value > a->top->next->next->value
		&& b->top->value < a->top->prev->value)
	{
		rra(a);
		pa(a, b);
	}
	else if (b->top->value < a->top->value
		&& b->top->value > a->top->prev->value)
		pa(a, b);
	else
		add_in_four(a, b);
	sort_in_five(a);
}

void	sort_five_args(t_stack *a, t_stack *b)
{
	pb(a, b);
	pb(a, b);
	sort_three_args(a);
	is_two_args_in_b(a, b);
	is_one_args_in_b(a, b);
}
