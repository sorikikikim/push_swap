#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <math.h>
# include <stdio.h> //remove
# include "libft.h"

typedef struct s_node
{
	int				value;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	int		size;
	t_node	*top;
}	t_stack;

int			main(int argc, char *argv[]);
void		print_error(void);
int			check_valid_digit(char *element);
int			check_valid_num(char *element);
long long	check_num_range(char *element);
int			check_duplication(int size, int *element);
long long	ft_atoi_ll(const char *str);
int			count_element(char **element);
char		*ft_concat(char *s1, char *s2);

t_node		*create_node(int data);
t_stack		*put_element(t_stack *stack, int size, int *temp);
t_stack		*init_stack(void);

int			is_sorted(t_stack *a, t_stack *b);
void		sorting(t_stack *a, t_stack *b, int *arr);
void		is_two_args_in_b(t_stack *a, t_stack *b);
void		is_one_args_in_b(t_stack *a, t_stack *b);
void		sort_two_args(t_stack *a);
void		sort_three_args(t_stack *a);
void		sort_four_args(t_stack *a, t_stack *b);
void		sort_five_args(t_stack *a, t_stack *b);

int			set_chunk_num(int size);
int			*set_pivot(int chunk_num, int arr_size);
int			max_index(t_stack *b);
void		bubble_sort(int arr[], int arr_size);
void		sort_one_chunk(t_stack *a, t_stack *b);
void		set_chunks_bound(t_stack *a, t_stack *b, int *arr, int *pivots);
void		sort_chunks(t_stack *a, t_stack *b, int *arr);
void		rotate_or_reverse(t_stack *stack, int size, int index);

void		push_node(t_stack *stack, int data);
int			pop_node(t_stack *stack);
void		sa(t_stack *a);
void		sb(t_stack *b);
void		swap_a(t_stack *a);
void		swap_b(t_stack *b);
void		ss(t_stack *a, t_stack *b);
void		pa(t_stack *a, t_stack *b);
void		pb(t_stack *a, t_stack *b);
void		ra(t_stack *a);
void		rb(t_stack *b);
void		rotate_a(t_stack *a);
void		rotate_b(t_stack *b);
void		rr(t_stack *a, t_stack *b);
void		rra(t_stack *a);
void		rrb(t_stack *b);
void		reverse_rotate_a(t_stack *a);
void		reverse_rotate_b(t_stack *b);
void		rrr(t_stack *a, t_stack *b);

#endif