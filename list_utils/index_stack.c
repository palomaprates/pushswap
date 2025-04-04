/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:37:08 by pprates-          #+#    #+#             */
/*   Updated: 2025/04/03 10:44:41 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	index_stack(Node **list)
{
	Node	*aux1;
	Node	*aux2;
	int	rank;

	aux1 = *list;
	while (aux1)
	{
		rank = 0;
		aux2 = *list;
		while (aux2)
		{
			if (aux2->value < aux1->value)
					rank++;
			aux2 = aux2->next;
		}
		aux1->index = rank;
		aux1 = aux1->next;
	}
}
