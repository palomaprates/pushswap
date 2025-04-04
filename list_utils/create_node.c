/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:36:56 by pprates-          #+#    #+#             */
/*   Updated: 2025/04/03 10:36:57 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

Node	*create_node(int value, int index)
{
	Node	*new;

	new = malloc(sizeof(Node));
	if (!new)
		return (NULL);
	new->value = value;
	new->index = index;
	new->next = NULL;
	return (new);
}
