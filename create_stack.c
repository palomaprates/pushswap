/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paloma <paloma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:39:21 by pprates-          #+#    #+#             */
/*   Updated: 2025/04/13 20:04:27 by paloma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_left_zero(char *str)
{
	int	left_zero;
	
	left_zero = 0;
	while (str[left_zero] == '0')
	{
		left_zero++;
	}
	return (left_zero);
}
int	is_big_integer(char *str)
{

	if (ft_strlen(str) > 11 && is_left_zero(str) > 1)
		return (0);
	else if (ft_strlen(str) > 11 && is_left_zero(str) <= 1)
		return (1);
	return (0);
}
int	valid_number(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] == '+' || str[i] == '-') && \
		(str[i + 1] == '0' && str[i + 1]))
			return (0);
		i++;
	}
	return (1);
}
int	create_stack(int size, char **argv, t_node **list)
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
		if (!(is_str_number(argv[i])) || !valid_number(argv[i]) || \
		is_big_integer(argv[i]))
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
