/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_bigger.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:38:50 by pprates-          #+#    #+#             */
/*   Updated: 2025/04/04 15:20:28 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_bigger(t_node *list)
{
	int	size;
	int	i;
	int	current;

	current = list->index;
	list = list->next;
	size = get_list_size(list);
	i = 0;
	while (i < size)
	{
		if (current > list->index)
			return (1);
		list = list->next;
		i++;
	}
	return (0);
}
