/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:39:21 by pprates-          #+#    #+#             */
/*   Updated: 2025/04/04 14:54:59 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	create_stack(int size, char **argv, Node **list)
{
	long long	result;
	int			i;

	i = 1;
	while (i < size)
	{
		if (argv[i][0] == '\0' || is_duplicate(argv, i))
		{
			ft_lstclear(list);
			return (0);
		}
		if (!(is_str_number(argv[i])) || ft_strlen(argv[i]) > 11)
		{
			ft_lstclear(list);
			return (0);
		}
		result = ft_atoi(argv[i]);
		if (result > INT_MAX || result < INT_MIN)
			return (0);
		add_back(list, result, 0);
		i++;
	}
	return (1);
}
