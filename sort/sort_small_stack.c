/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paloma <paloma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:38:34 by pprates-          #+#    #+#             */
/*   Updated: 2025/04/29 11:44:01 by paloma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_small_stack(t_node **list_a, int size)
{
	t_node	*aux;
	int		i;

	aux = *list_a;
	i = 0;
	while (i < size)
	{
		if (!aux->next)
			return ;
		if (is_sorted(*list_a))
			return ;
		else if (aux->value > aux->next->value)
			swap(list_a, 'a');
		else if (aux->value < aux->next->value)
			reverse_rotate(list_a, 'a');
		aux = *list_a;
		i++;
	}
}
