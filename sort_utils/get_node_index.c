/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_node_index.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:38:47 by pprates-          #+#    #+#             */
/*   Updated: 2025/05/03 15:18:48 by pprates-         ###   ########.fr       */
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
