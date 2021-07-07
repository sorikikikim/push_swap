#include "push_swap.h"

int	check_valid_num(char *element)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	if (element[i] == '+' || element[i] == '-')
		i++;
	while (element[i])
	{
		if (!(element[i] > 47 && element[i] < 58))
			return (1);
		i++;
	}
	return (0);
}

int	check_valid_digit(char *element)
{
	int	digit;
	int	i;

	i = 0;
	digit = 0;
	while (element[i])
	{
		if (element[i] == '0' || element[i] == '+' || element[i] == '-')
			i++;
		else
		{
			digit++;
			i++;
		}
	}
	return (digit);
}

long long	check_num_range(char *element)
{
	long long	num;

	num = ft_atoi_ll(element);
	if ((num < (long long) -2147483648) || (num > (long long)2147483647))
		return (3000000000);
	else
		return (num);
}

int	check_duplication(int size, int *element)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (element[i] == element[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	print_error(void)
{
	ft_putstr_fd("Error\n", 1);
	exit(1);
}
