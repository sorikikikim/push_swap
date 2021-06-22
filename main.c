#include <stdlib.h>
#include <stdio.h>
#include "./Libft/libft.h"


//#include "push_swap.h"



void	check_many_arg(char *argv)
{
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
	//if (argc > 2)
	//	while (++i < argc)
	//		check_many_arg(argv[i]);

}