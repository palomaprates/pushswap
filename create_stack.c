/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paloma <paloma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:39:21 by pprates-          #+#    #+#             */
/*   Updated: 2025/04/16 17:13:45 by paloma           ###   ########.fr       */
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

int	count_total_words(char **argv)
{
	int		total = 0;
	char	**temp;
	int		i = 1;
	int		j;

	while (argv[i])
	{
		temp = ft_split(argv[i], ' ');
		if (!temp)
			return (-1);
		j = 0;
		while (temp[j])
		{
			total++;
			j++;
		}
		free(temp);
		i++;
	}
	return (total);
}

char	**get_new_argv(char **argv)
{
	char	**new_array;
	char	**temp;
	int	i;
	int	j;
	int	k;
	i = 1;
	k = 0;
	new_array = malloc(sizeof(char) * count_total_words(argv) + 1);
	if (!new_array)
		return (NULL);
	while (argv[i])
	{
		temp = ft_split(argv[i], ' ');
		j = 0;
		while (temp[j])
		{
			new_array[k] = ft_strdup(temp[j]);
			j++;
			k++;
		}
		free(temp);
		i++;
	}
	return (new_array);	
}

int	create_stack(char **argv, t_node **list)
{
	long long	result;
	int			j;
	char			**temp;
	j = 0;
	temp = get_new_argv(argv);
		while (temp[j])
		{
			if (temp[j][0] == '\0' || is_duplicate(temp, j))
			{
				ft_lstclear(list);
				return (0);
			}
			if (!(is_str_number(temp[j])) || !valid_number(temp[j]) || \
			is_big_integer(temp[j]))
			{
				ft_lstclear(list);
				return (0);
			}
			result = ft_atoi(temp[j]);
			if (result > INT_MAX || result < INT_MIN)
				return (0);
			add_back(list, result, 0);
			j++;
		}
		free(temp);
	return (1);
}
