#include "push_swap.h"

static int	check_many_arg(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		if ((!check_valid_num(argv[i])) || (check_valid_digit(argv[i]) > 10))
			return (print_error());
		if (check_num_range(argv[i]) == 3000000000)
			return (print_error());
		i++;
	}
	return (1);
}

static int	check_one_arg(char *argv)
{
	char	**element;
	int		count;
	int		i;

	element = ft_split(argv, ' ');
	count = count_element(element);
	i = 0;
	while (i < count)
	{
		if ((!check_valid_num(element[i])) || (check_valid_digit(element[i]) > 10))
			return (print_error());
		if (check_num_range(element[i]) == 3000000000)
			return (print_error());
		i++;
	}
	return (1);
}

int			main(int argc, char *argv[])
{
	int i;

	i = -1;
	if (argc == 1)
		return (print_error());
	if (argc == 2)
		check_one_arg(argv[1]);
	if (argc > 2)
		check_many_arg(argc, argv);
}