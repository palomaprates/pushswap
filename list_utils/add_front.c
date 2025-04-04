/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_front.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:36:52 by pprates-          #+#    #+#             */
/*   Updated: 2025/04/03 10:36:53 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	add_front(Node **listInit, int value, int index)
{
	Node	*new;

	new = malloc(sizeof(Node));
	if (!new)
		return ;
	if (new)
	{
		new->value = value;
		new->index = index;
		new->next = *listInit;
		*listInit = new;
	}
}
