/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_back.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:37:16 by pprates-          #+#    #+#             */
/*   Updated: 2025/04/03 10:55:07 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	remove_back(Node **listInit)
{
	Node	*aux;
	int		list_size;
	int		i;

	aux = *listInit;
	list_size = get_list_size(*listInit);
	i = 0;
	if (!list_size)
		return ;
	if (list_size == 1)
		*listInit = NULL;
	while (i < list_size)
	{
		if (i == list_size - 2)
		{
			free(aux->next);
			aux->next = NULL;
			return ;
		}
		aux = aux->next;
		i++;
	}
}
