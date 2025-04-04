/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_bigger.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:38:40 by pprates-          #+#    #+#             */
/*   Updated: 2025/04/04 15:20:28 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_bigger(t_node *list_a, int size)
{
	int	i;
	int	bigger;

	i = 0;
	bigger = 0;
	while (i < size)
	{
		if (list_a->index > bigger)
			bigger = list_a->index;
		list_a = list_a->next;
		i++;
	}
	return (bigger);
}
