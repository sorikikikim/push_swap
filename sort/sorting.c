#include "push_swap.h"

void	sorting(t_stack *a, t_stack *b, int *arr)
{
	if (a->size == 2)
		sort_two_args(a);
	else if (a->size == 3)
		sort_three_args(a);
	else if (a->size == 4)
		sort_four_args(a, b);
	else if (a->size == 5)
		sort_five_args(a, b);
	else if (a->size < 16)
		sort_one_chunk(a, b);
	else
		sort_chunk(a, b, arr);
	free(arr);
}
