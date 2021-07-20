#include "push_swap.h"

void	sorting(t_stack *a, t_stack *b, int args)
{
	if (args == 2)
		sort_two_args(a);
	else if (args == 3)
		sort_three_args(a);
	else if (args == 4)
		sort_four_args(a, b);
	else if (args == 5)
		sort_five_args(a, b);
	//else
	//	sort_all_args(a, b);
}
