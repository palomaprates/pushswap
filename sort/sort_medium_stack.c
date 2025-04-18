/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paloma <paloma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:38:23 by pprates-          #+#    #+#             */
/*   Updated: 2025/04/18 16:21:08 by paloma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_medium_stack(t_node **list, int size)
{
	t_node	*list_b;
	t_node	*aux;
	int		current_index;

	list_b = NULL;
	if (is_sorted(*list))
		return ;
	current_index = sort_medium_list(list, &list_b, size);
	aux = *list;
	if (current_index > aux->next->index)
		swap(list, 'a');
	push_all(&list_b, list, 'a');
}
