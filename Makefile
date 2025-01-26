# CFLAGS = -Wall -Wextra -Werror

SRCS = main.c create_stack.c movements/push.c movements/rotate.c movements/swap.c list_utils/add_back.c list_utils/add_front.c list_utils/get_first_node.c list_utils/get_last_node.c list_utils/get_list_size.c list_utils/print_list.c list_utils/remove_back.c list_utils/remove_front.c utils/is_number.c utils/ft_atoi.c utils/ft_strlen.c utils/is_str_number.c

OBJS = $(SRCS:.c=.o)

NAME = push_swap

all: $(NAME) 

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all