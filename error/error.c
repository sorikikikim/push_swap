#include "push_swap.h"

int		check_valid_num(char *element)
{
	int i;
	int flag;

	i = 0;
	flag = 0;
	if (element[i] == '+' || element[i] == '-')
		i++;
	while (element[i])
	{
		if (!(element[i] > 47 && element[i] < 58))
			return (0);
		i++;
	}
	return (1);
}

int	check_valid_digit(char *element)
{
	int digit;
	int i;

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

int		print_error()
{
	ft_putstr_fd("Error\n", 1);
	return (0);
}