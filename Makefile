CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I ./include -I Libft
NAME = push_swap
HEADER = push_swap.h
LIBFT = Libft
LIBFT_LIB = libft.a
SRCS =	
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