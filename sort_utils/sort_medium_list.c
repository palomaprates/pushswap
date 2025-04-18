/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium_list.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paloma <paloma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:38:59 by pprates-          #+#    #+#             */
/*   Updated: 2025/04/18 16:31:16 by paloma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	make_movements(t_node **list, int size, int less)
{
	if (get_node_index(*list, size - 1) == less || \
get_node_index(*list, size - 2) == less)
		reverse_rotate(list, 'a');
	else
		rotate(list, 'a');
}

int	sort_medium_list(t_node **list, t_node **list_b, int size)
{
	t_node	*aux;
	int		less;

	aux = *list;
	less = 0;
	while (size > 2)
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
			size--;
		}
		else
			make_movements(list, size, less);
		aux = *list;
	}
	return (aux->index);
}
