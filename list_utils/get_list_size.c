/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_list_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:37:05 by pprates-          #+#    #+#             */
/*   Updated: 2025/04/03 10:37:06 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_list_size(Node *listInit)
{
	int	i;

	i = 0;
	if (!listInit)
		return (0);
	while (listInit)
	{
		listInit = listInit->next;
		i++;
	}
	return (i);
}
