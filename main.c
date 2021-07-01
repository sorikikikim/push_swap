#include "push_swap.h"

static int	check_many_arg(int size, char **strs, int **temp)
{
	int i;
	int *num;

	num = (int *)malloc(sizeof(int) * (size));
	i = 0;
	while (i < size)
	{
		if ((!check_valid_num(strs[i])) || (check_valid_digit(strs[i]) > 10))
			return (print_error());
		if (check_num_range(strs[i]) == 3000000000)
			return (print_error());
		num[i] = ft_atoi(strs[i]);
		i++;
	}
	*temp = num;
	return (1);
}

// static int	check_one_arg(char *argv, int **temp)
// {
// 	char	**element;
// 	int		count;
// 	int		i;
// 	int	*num;

// 	element = ft_split(argv, ' ');
// 	count = count_element(element);
// 	num = (int *)malloc(sizeof(int) * count);
// 	i = 0;
// 	while (i < count)
// 	{
// 		if ((!check_valid_num(element[i])) || (check_valid_digit(element[i]) > 10))
// 			return (print_error());
// 		if (check_num_range(element[i]) == 3000000000)
// 			return (print_error());
// 		num[i] = ft_atoi(element[i]);
// 		i++;
// 	}
// 	*temp = num;
// 	return (1);
// }

int			main(int argc, char *argv[])
{
	int i;
	int *temp_stack;
	char **temp = NULL;

	temp_stack = 0;
	i = -1;
	if (argc == 1)
		return (print_error());
	if (argc == 2)
	{
		temp = ft_split(argv[1], ' ');
		check_many_arg(count_element(temp), temp, &temp_stack);
	}
	if (argc > 2)
		check_many_arg(argc - 1, argv + 1, &temp_stack);
	// for(int a = 0; a < count_element(temp); a++)
	// 	printf("%d\n", temp_stack[a]);

}