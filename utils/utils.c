#include "push_swap.h"

long long	ft_atoi_ll(const char *str)
{
	size_t			i;
	int				minus;
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


int			count_element(char **element)
{
	int i;

	i = 0;
	while (element[i])
		i++;
	return (i);
}