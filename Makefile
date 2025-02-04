# CFLAGS = -Wall -Wextra -Werror

SRCS = main.c sort_small_stack.c radix_sort.c create_stack.c movements/push.c movements/rotate.c movements/reverse_rotate.c movements/swap.c list_utils/add_back.c list_utils/add_front.c list_utils/get_first_node.c list_utils/get_last_node.c list_utils/get_list_size.c list_utils/print_list.c list_utils/remove_back.c list_utils/remove_front.c list_utils/index_stack.c list_utils/push_all.c utils/is_number.c utils/ft_atoi.c utils/ft_strlen.c utils/is_str_number.c utils/get_binary_len.c utils/is_duplicate.c

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