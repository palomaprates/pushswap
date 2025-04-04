/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:37:47 by pprates-          #+#    #+#             */
/*   Updated: 2025/04/04 15:20:28 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_node **list, t_node **listB, char c)
{
	t_node	*aux;

	aux = *list;
	if (!*list)
		return ;
	add_front(listB, aux->value, aux->index);
	remove_front(list);
	write(1, "p", 1);
	write(1, &c, 1);
	write(1, "\n", 1);
}
