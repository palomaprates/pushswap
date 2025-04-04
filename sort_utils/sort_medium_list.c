/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium_list.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:38:59 by pprates-          #+#    #+#             */
/*   Updated: 2025/04/04 14:57:17 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	sort_medium_list(Node **list, Node **list_b, int size)
{
	Node	*aux;
	Node	*next;
	int		less;

	aux = *list;
	less = 0;
	while (size > 2)
	{
		if (!aux)
			return (-1);
		next = aux->next;
		if (aux->index == less)
		{
			push(list, list_b, 'b');
			less++;
			size--;
		}
		else
		{
			if (get_node_index(*list, size - 1) == less || get_node_index(*list, size - 2) == less)
				reverse_rotate(list, 'a');
			else
				rotate(list, 'a');
		}
		aux = *list;
	}
	return (aux->index);
}
