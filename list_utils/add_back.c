/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_back.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:36:42 by pprates-          #+#    #+#             */
/*   Updated: 2025/04/03 10:42:17 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	add_back(Node **list, int value, int index)
{
	Node	*aux;
	Node	*new;
	int		i;
	int		list_size;

	i = -1;
	list_size = get_list_size(*list);
	new = create_node(value, index);
	if (!new)
		return ;
	aux = *list;
	if (list_size == 0)
		*list = new;
	else
	{
		while (++i < list_size)
		{
			if (i == list_size - 1)
				aux->next = new;
			else
				aux = aux->next;
		}
	}
}
