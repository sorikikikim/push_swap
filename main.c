#include "push_swap.h"

static int	check_all_digit(char *str)
{
	while (*str)
	{
		if (!(str) && !ft_isdigit(*str))
		{
			ft_putstr_fd("Error\n", 1);
			return (0);
		}	
		str++;
	}
	return (1);
}

static int	count_element(char **element)
{
	int i;

	i = 0;
	while (element[i])
		i++;
	return (i);
}

static void	check_argument(char *argv)
{
	char	**element;
	int		count;
	int		i;

	element = ft_split(argv, ' ');
	count = count_element(element);
	i = 0;
	while (i < count)
	{
		if (check_all_digit(element[i]) == 0)
		{
			ft_putstr_fd("Error\n", 1);
			return (0);
		}
		i++;
	}
}

int			main(int argc, char *argv[])
{
	if (argc == 1)
	{
		ft_putstr_fd("Error\n", 1);
		return (0);
	}
	if (argc == 2)
		check_argument(argv[1]);


}