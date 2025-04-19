/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_node_index.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paloma <paloma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:38:47 by pprates-          #+#    #+#             */
/*   Updated: 2025/04/19 10:32:40 by paloma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_node_index(t_node *list, int index)
{
	int	i;
	int	size;

	i = 0;
	size = get_list_size(list);
	while (i < size)
	{
		if (i == index)
			return (list->index);
		i++;
		list = list->next;
	}
	return (-1);
}
