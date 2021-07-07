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

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;
	char	**temp;
	int		*temp_stack;

	a = init_stack();
	b = init_stack();
	temp = NULL;
	temp_stack = NULL;
	if (argc < 2)
		print_error();
	
	check_arg(count_element(temp), temp, &temp_stack);
	put_element(a, count_element(temp), temp_stack);
}

char	*format_args(int argc, char *argv[])
{
	int i;
	char **ret;
	char	*str = malloc(sizeof(char));
	i = 1;
	str[0] = 0;
	while (i < argc)
	{
		if (i == 1)
		{
			char *temp1 = str;
			str = ft_strjoin(str, argv[i]);
			free(temp1);
		}
		else
		{
			char *temp1 = str;
			char *temp2;
			temp2 =  ft_strjoin(" ", argv[i]);
			str = ft_concat(str, temp2);
		}
		i++;
	}
	ret = ft_split(str, ' ');
}
/*
	if (argc == 2)
	{
		temp = ft_split(argv[1], ' ');
		check_arg(count_element(temp), temp, &temp_stack);
		put_element(a, count_element(temp), temp_stack);
	}
	else
	{
		check_arg(argc - 1, argv + 1, &temp_stack);
		put_element(a, argc - 1, temp_stack);
	}
	*/
/*
		printf("top : %d\n", a->top->value);
		printf("bottom : %d\n", a->top->prev->value);
		pop_node(a);
				//printf("top : %p\n", a->top);
		printf("top : %d\n", a->top->value);
		printf("bottom : %d\n", a->top->prev->value);

		printf("top : %d\n", b->top->value);*/
		/* 
		printf("top : %d\n", a->top->value);
		printf("bottom : %d\n", a->top->prev->value);
		pop_node(a);
				//printf("top : %p\n", a->top);

		printf("top : %d\n", a->top->value);
		printf("bottom : %d\n", a->top->prev->value);
	*/
/* 
	for (t_node *i = a->head;j < a->size ;i = i->next)
	 {
	 	printf("%d\n", i->value);
	 	j++;
	 }
	 */