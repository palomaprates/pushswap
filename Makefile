CFLAGS = -Wall -Wextra -Werror

SRCS = main.c push.c rotate.c swap.c list_utils/add_back.c list_utils/add_front.c list_utils/get_first_node.c list_utils/get_last_node.c list_utils/get_list_size.c list_utils/print_list.c list_utils/remove_back.c list_utils/remove_front.c 

OBJS = $(SRCS:.c=.o)

NAME = pushswap

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