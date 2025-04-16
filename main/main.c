/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paloma <paloma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:37:43 by pprates-          #+#    #+#             */
/*   Updated: 2025/04/16 16:55:23 by paloma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char *argv[])
{
	t_node	*list;
	// t_node	*list_b;
	int		size;

	list = NULL;
	// list_b = NULL;
	if (argc <= 1)
		return (0);
	if (!create_stack(argv, &list))
	{
		write(2, "Error\n", 7);
		ft_lstclear(&list);
		return (0);
	}
	index_stack(&list);
	size = get_list_size(list);
	if (size <= 3)
		sort_small_stack(&list, size);
	else if (size <= 5)
		sort_medium_stack(&list, size);
	else
		radix_sort(&list, size);
	print_list(&list);
	ft_lstclear(&list);
}
