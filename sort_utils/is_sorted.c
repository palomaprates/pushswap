/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:38:53 by pprates-          #+#    #+#             */
/*   Updated: 2025/04/03 10:38:54 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_sorted(Node *list)
{
	int	size;
	int	i;

	size = get_list_size(list);
	i = 0;
	while (i < size)
	{
		if (is_bigger(list))
			return (0);
		list = list->next;
		i++;
	}
	return (1);
}
