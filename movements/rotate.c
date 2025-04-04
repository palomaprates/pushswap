/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:37:56 by pprates-          #+#    #+#             */
/*   Updated: 2025/04/04 15:20:28 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_node **listInit, char c)
{
	t_node	*aux;

	aux = *listInit;
	add_back(listInit, aux->value, aux->index);
	remove_front(listInit);
	write(1, "r", 1);
	write(1, &c, 1);
	write(1, "\n", 1);
}
