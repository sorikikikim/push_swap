#include "push_swap.h"

int set_chunk_num(int size)
{
	int chunk_num;

	chunk_num = sqrt((double)size) / 2;
	return (chunk_num);
}

int	*set_pivot(int chunk_num, int *arr, int arr_size)
{
	int	*pivots;
	int	i;
	int	sec;

	pivots = (int *)malloc(sizeof(int) * (chunk_num - 1));
	sec = arr_size / (chunk_num + 1);

	i = 0;
	while (i < chunk_num - 1)
	{
		pivots[i] = arr[sec * (i + 1)];
		i++;
	}
	return (pivots);
}

void	sort_chunk(t_stack *a, t_stack *b ,int *arr)
{
	int	*pivots;

	bubble_sort(arr, a->size);
	pivots = decide_pivot(chunk_num(a->size), arr, a->size);

}

int	max_index(t_stack *b)
{
	t_node	*temp;
	int		i;
	int		max;
	int		index;

	max = -2147483647;
	i = 0;
	index = 0;
	temp = b->top;
	while (i < b->size)
	{
		if (max < temp->value)
		{
			index = i;
			max = temp->value;
		}
		temp = temp->next;
		i++;
	}
	return (index);
}

void	rotate_or_reverse(t_stack *stack, int size, int index)
{
	int i;

	i = -1;
	if (index <= size/2)
		while (++i < index)
			ra(stack);
	else
		while (++i < size - index)
			rra(stack);
}