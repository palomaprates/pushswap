/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_front.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:37:35 by pprates-          #+#    #+#             */
/*   Updated: 2025/04/03 10:55:57 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	remove_front(Node **listInit)
{
	Node	*aux;

	if (!*listInit)
		return ;
	aux = *listInit;
	*listInit = (*listInit)->next;
	free(aux);
}
