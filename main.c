#include "push_swap.h"

static void	check_arg(int size, char **arg, int **temp)
{
	int	i;
	int	*num;

	num = (int *)malloc(sizeof(int) * (size));
	i = 0;
	while (i < size)
	{
		if (check_valid_num(arg[i]) || (check_valid_digit(arg[i]) > 10))
			print_error();
		if (check_num_range(arg[i]) == 3000000000)
			print_error();
		num[i] = ft_atoi(arg[i]);
		i++;
	}
	if (check_duplication(size, num))
		print_error();
	*temp = num;
}

static char	**format_args(int argc, char *argv[])
{
	int		i;
	char	**ret;
	char	*str;
	char	*temp;

	i = 0;
	str = malloc(sizeof(char));
	str[0] = 0;
	while (++i < argc)
	{
		temp = str;
		if (i == 1)
		{
			str = ft_strjoin(str, argv[i]);
			free(temp);
		}
		else
		{
			temp = ft_strjoin(" ", argv[i]);
			str = ft_concat(str, temp);
		}
	}
	ret = ft_split(str, ' ');
	free(str);
	return (ret);
}

static void	free_exit(t_stack *a, t_stack *b)
{
	int	i;
	int	size;

	i = 0;
	size = a->size;
	while (i < size)
	{
		pop_node(a);
		i++;
	}
	free(b);
	free(a);
}

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;
	char	**args;
	int		*temp_stack;

	a = init_stack();
	b = init_stack();
	temp_stack = NULL;
	args = NULL;
	if (argc < 2)
		print_error();
	else
	{
		args = format_args(argc, argv);
		check_arg(count_element(args), args, &temp_stack);
		put_element(a, count_element(args), temp_stack);
		if (!is_sorted(a, b))
			sorting(a, b, temp_stack);
	}
	free_recur(args);
	free_exit(a, b);
}
