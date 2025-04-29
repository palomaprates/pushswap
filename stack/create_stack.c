/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paloma <paloma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:39:21 by pprates-          #+#    #+#             */
/*   Updated: 2025/04/28 15:10:43 by paloma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_valid(char **temp, int j, t_node **list)
{
	if (temp[j][0] == '\0' || is_duplicate(temp, j))
	{
		free_split(temp);
		ft_lstclear(list);
		return (0);
	}
	if (!(is_str_number(temp[j])) || !valid_number(temp[j]) || \
is_big_integer(temp[j]))
	{
		free_split(temp);
		ft_lstclear(list);
		return (0);
	}
	return (1);
}

int	create_stack(int argc, char **argv, t_node **list)
{
	char			**temp;
	long long		result;
	int				j;

	temp = get_splited_argv(argc, argv);
	j = 0;
	if (!temp)
		return (0);
	while (temp[j])
	{
		if (!is_valid(temp, j, list))
			return (0);
		result = ft_atoi(temp[j]);
		if (result > INT_MAX || result < INT_MIN)
		{
			free_split(temp);
			ft_lstclear(list);
			return (0);
		}
		add_back(list, result, 0);
		j++;
	}
	free_split(temp);
	return (1);
}
