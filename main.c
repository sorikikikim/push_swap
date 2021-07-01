#include "push_swap.h"

static void	check_arg(int size, char **arg, int **temp)
{
	int i;
	int *num;

	num = (int *)malloc(sizeof(int) * (size));
	i = 0;
	while (i < size)
	{
		if ((!check_valid_num(arg[i])) || (check_valid_digit(arg[i]) > 10))
			print_error();
		if (check_num_range(arg[i]) == 3000000000)
			print_error();
		num[i] = ft_atoi(arg[i]);
		i++;
	}
	*temp = num;
}

int			main(int argc, char *argv[])
{
	char	**temp;
	int		*temp_stack;

	temp = NULL;
	temp_stack = NULL;
	if (argc == 1)
		print_error();
	if (argc == 2)
	{
		temp = ft_split(argv[1], ' ');
		check_arg(count_element(temp), temp, &temp_stack);
	}
	if (argc > 2)
		check_arg(argc - 1, argv + 1, &temp_stack);
}