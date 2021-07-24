#include "push_swap.h"

int set_chunk_num(int size)
{
	int chunk_num;

	chunk_num = sqrt((double)size) / 2;
	return (chunk_num);
}

int	*set_pivot(int chunk_num, int arr_size)
{
	int	*pivots;
	int	i;
	int	sec;

	pivots = (int *)malloc(sizeof(int) * (chunk_num + 1));
	sec = arr_size / chunk_num;
	pivots[0] = 0;
	pivots[chunk_num] = arr_size - 1;
	i = 1;
	while (i < chunk_num)
	{
		pivots[i] = sec * i;
		i++;
	}
	return (pivots);
}

void	sort_chunk(t_stack *a, t_stack *b ,int *arr)
{
	int	*pivots;
	int	i;
	int	chunk_num;
	int	j;
	chunk_num = set_chunk_num(a->size);
	bubble_sort(arr, a->size);
		
	pivots = set_pivot(chunk_num, a->size);
	
	i = 0;
	while (i < chunk_num - 1)
	{
		j = 0;
		while (j < pivots[i + 1] - pivots[i])
		{
			if (arr[pivots[i]] <= a->top->value &&
				arr[pivots[i + 1]] > a->top->value)
				{
					pb(a, b);
					j++;
				}
			else
					ra(a);
		}
		i++;
	}
	while (a->size)
		pb(a, b);
	while (b->size)
	{
		rotate_or_reverse(b, b->size, max_index(b));
		pa(a, b);
	}
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
	{	while (++i < index)
		{
			ra(stack);
		}	
	}
	else
		while (++i < size - index)
			rra(stack);
}