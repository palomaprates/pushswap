# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paloma <paloma@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/03 10:39:32 by pprates-          #+#    #+#              #
#    Updated: 2025/04/16 21:33:28 by paloma           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = #-Wall -Wextra -Werror

SRCS =	main/main.c					\
			sort/radix_sort.c			\
			sort/sort_medium_stack.c \
			sort/sort_small_stack.c	\
			create_stack.c 			\
			movements/push.c 			\
			movements/rotate.c 		\
			movements/reverse_rotate.c	\
		 	movements/swap.c				\
			list_utils/create_node.c 	\
			list_utils/add_back.c		\
			list_utils/add_front.c		\
			list_utils/get_list_size.c	\
			list_utils/remove_back.c	\
			list_utils/remove_front.c	\
			list_utils/index_stack.c	\
			list_utils/push_all.c		\
			list_utils/ft_lst_clear.c	\
			utils/is_number.c 			\
			utils/ft_atoi.c				\
			utils/ft_strlen.c				\
			utils/is_str_number.c		\
			utils/is_duplicate.c			\
			utils/ft_split.c				\
			utils/ft_strlcpy.c			\
			utils/ft_strdup.c				\
			sort_utils/get_bigger.c		\
			sort_utils/get_binary_len.c \
			sort_utils/is_bigger.c		\
			sort_utils/is_sorted.c		\
			sort_utils/sort_list.c		\
			sort_utils/sort_medium_list.c \
			sort_utils/get_node_index.c	\
			print_list.c					\
			
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
