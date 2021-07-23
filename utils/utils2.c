#include "push_swap.h"

int find_node(t_stack *stack, int index)
{
	t_node *find;
	int	i;

	i = -1;
	find = (t_node *)malloc(sizeof(t_node));
	find = stack->top;
	while (++i < index - 1)
		find = find->next;
	return (find->value);
}

void	bubble_sort(int arr[], int arr_size)
{
	int temp;
	int i;
	int j;

	temp = 0;
	i = 0;
	while (i < arr_size - 1)
	{
		j = 0;
		while (j < arr_size - 1 - i)
		{
			if (arr[j] > arr[j + 1])
			{       			
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
