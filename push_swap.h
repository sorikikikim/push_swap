#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
#include "libft.h"

//typedef struct	s_node
//{
//	int data;
//	struct s_node *prev;
//	struct s_node *next;
//}				t_node;
//
//typedef struct	s_linked_list
//{
//	t_node *head;
//	int		size;
//}				t_linked_list;
int			main(int argc, char *argv[]);
int			print_error();
int			check_valid_digit(char *element);
int			check_valid_num(char *element);
long long	check_num_range(char *element);
long long	ft_atoi_ll(const char *str);
int			count_element(char **element);

#endif