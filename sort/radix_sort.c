/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:38:17 by pprates-          #+#    #+#             */
/*   Updated: 2025/04/04 15:20:28 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	radix_sort(t_node **list, int size)
{
	int	i;
	int	bigger;
	int	binary_len;

	i = 0;
	bigger = get_bigger(*list, size);
	binary_len = get_binary_len(bigger);
	if (is_sorted(*list))
		return ;
	while (i < binary_len)
	{
		sort_list(list, size, i);
		i++;
	}
}
