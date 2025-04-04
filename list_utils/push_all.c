/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:37:12 by pprates-          #+#    #+#             */
/*   Updated: 2025/04/04 15:20:28 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_all(t_node **list1, t_node **list2, char c)
{
	int	i;
	int	size;

	i = 0;
	size = get_list_size(*list1);
	while (i < size)
	{
		push(list1, list2, c);
		i++;
	}
}
