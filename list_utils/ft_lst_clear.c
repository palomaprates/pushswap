/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_clear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:37:00 by pprates-          #+#    #+#             */
/*   Updated: 2025/04/03 10:43:43 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstclear(Node **list)
{
	Node	*temp;
	Node	*current;

	current = *list;
	while (current)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*list = NULL;
}
