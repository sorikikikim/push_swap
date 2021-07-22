CC = gcc
CFLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address
INCLUDES = -I ./ -I Libft
NAME = push_swap
HEADER = push_swap.h
LIBFT = Libft
LIBFT_LIB = libft.a
SRCS = error/error.c instruction/swap.c instruction/push.c\
	   instruction/rotate.c instruction/reverse_rotate.c\
	   sort/all_args.c sort/sorting.c sort/two_four_args.c sort/three_args.c sort/five_args.c\
	   utils/utils.c utils/utils2.c\
	   stack/set_stack.c stack/push_pop.c\
	   main.c
OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	make -C $(LIBFT)
	$(CC) $(CFLAGS) -L$(LIBFT) -lft $^ -o $@

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)

clean :
	make clean -C $(LIBFT)
	$(RM) $(OBJS)

fclean : clean
	make fclean -C $(LIBFT)
	$(RM) $(NAME)

re : fclean all