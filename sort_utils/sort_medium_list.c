/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium_list.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paloma <paloma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:38:59 by pprates-          #+#    #+#             */
/*   Updated: 2025/04/19 10:13:52 by paloma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	make_movements(t_node **list, int less)
{
	if (get_node_index(*list, 0) == less || \
get_node_index(*list, 1) == less)
		rotate(list, 'a');
	else
		reverse_rotate(list, 'a');
}

int	sort_medium_list(t_node **list, t_node **list_b, int size)
{
	t_node	*aux;
	int		less;

	aux = *list;
	less = 0;
	while (1)
	{
		if (!aux)
			return (-1);
		if (aux->index == less)
		{
			if (get_list_size(*list_b) == 2)
			{
				sort_small_stack(list, 3);
				push_all(list_b, list, 'a');
				return (-1);
			}
			push(list, list_b, 'b');
			less++;
		}
		else
			make_movements(list, less);
		aux = *list;
	}
	return (aux->index);
}
