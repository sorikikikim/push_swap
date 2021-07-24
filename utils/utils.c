#include "push_swap.h"

long long	ft_atoi_ll(const char *str)
{
	size_t				i;
	int					minus;
	unsigned long long	result;

	i = 0;
	minus = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
		minus *= -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return ((long long)result * minus);
}

int	count_element(char **element)
{
	int	i;

	i = 0;
	while (element[i])
		i++;
	return (i);
}

char	*ft_concat(char *s1, char *s2)
{
	char	*ret;

	ret = ft_strjoin(s1, s2);
	free(s1);
	free(s2);
	return (ret);
}

void	free_recur(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		free(argv[i]);
		i++;
	}
	free(argv);
}

void	bubble_sort(int arr[], int arr_size)
{
	int	temp;
	int	i;
	int	j;

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
