/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:38:02 by pprates-          #+#    #+#             */
/*   Updated: 2025/04/03 10:59:34 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(Node **listInit, char c)
{
	Node	*aux;
	int		temp;
	int		temp_index;

	if (get_list_size(*listInit) < 2)
		return ;
	aux = *listInit;
	temp = aux->value;
	aux->value = aux->next->value;
	aux->next->value = temp;
	temp_index = aux->index;
	aux->index = aux->next->index;
	aux->next->index = temp_index;
	write(1, "s", 1);
	write(1, &c, 1);
	write(1, "\n", 1);
}
