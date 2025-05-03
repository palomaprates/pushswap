/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:37:43 by pprates-          #+#    #+#             */
/*   Updated: 2025/05/03 15:11:09 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char *argv[])
{
	t_node	*list;
	int		size;

	list = NULL;
	if (argc <= 1)
		return (0);
	if (!create_stack(argc, argv, &list))
	{
		write(2, "Error\n", ft_strlen("Error\n"));
		ft_lstclear(&list);
		return (0);
	}
	index_stack(&list);
	size = get_list_size(list);
	if (size <= 3)
		sort_small_stack(&list, size);
	else if (size <= 5)
		sort_medium_stack(&list);
	else
		radix_sort(&list, size);
	ft_lstclear(&list);
}
