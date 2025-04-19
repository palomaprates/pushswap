/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paloma <paloma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:38:23 by pprates-          #+#    #+#             */
/*   Updated: 2025/04/19 13:57:23 by paloma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	make_movements(t_node **list, int less)
{
	if (get_node_index(*list, 1) == less)
		rotate(list, 'a');
	else
		reverse_rotate(list, 'a');
}

int	sort_three(t_node **list, t_node **list_b)
{
	if (get_list_size(*list_b) == 2)
	{
		sort_small_stack(list, 3);
		push_all(list_b, list, 'a');
		return (1);
	}
	return (0);
}

void	sort_medium_stack(t_node **list, int size)
{
	t_node	*list_b;
	t_node	*aux;
	int		less;

	list_b = NULL;
	aux = *list;
	less = 0;
	if (is_sorted(*list))
		return ;
	while (1)
	{
		if (!aux)
			return ;
		if (aux->index == less)
		{
			if (sort_three(list, &list_b))
				return ;
			push(list, &list_b, 'b');
			less++;
		}
		else
			make_movements(list, less);
		aux = *list;
	}
	return ;
}
