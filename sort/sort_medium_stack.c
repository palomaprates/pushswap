/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paloma <paloma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:38:23 by pprates-          #+#    #+#             */
/*   Updated: 2025/04/17 14:07:01 by paloma           ###   ########.fr       */
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
// 2 4 1 3 5 


// atual: (13 moves)

// ra stack a 4 1 3 5 2
// ra stack a 1 3 5 2 4
// pb stackb 1
// 		stack a 3 5 2 4
// rra stack a  4 3 5 2 
// rra stack a 2 4 3 5
// pb 2
// stack b 2 1
// stack a 4 3 5

// rra  5 4 3
// rra  3 4 5
// pb 3 
// stack b 3 2 1
// sa stack a 4 5
// pa 3 4 5
// pa 2 3 4 5
// pa 1 2 3 4 5