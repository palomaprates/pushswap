/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_back.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:36:42 by pprates-          #+#    #+#             */
/*   Updated: 2025/05/03 15:06:09 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	add_back(t_node **list, int value, int index)
{
	t_node	*aux;
	t_node	*new;
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
