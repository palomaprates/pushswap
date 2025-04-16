/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paloma <paloma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:39:21 by pprates-          #+#    #+#             */
/*   Updated: 2025/04/16 21:01:19 by paloma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	is_left_zero(char *str)
// {
// 	int	left_zero;
	
// 	left_zero = 0;
// 	while (str[left_zero] == '0')
// 	{
// 		left_zero++;
// 	}
// 	return (left_zero);
// }


int	is_left_zero(char *str)
{
	int i = 0;

	if (str[0] == '+' || str[0] == '-')
		i++;
	while (str[i] == '0')
		i++;
	if (str[i] == '\0')
		return (0);
	return (i - (str[0] == '+' || str[0] == '-'));
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
	if ((str[0] == '+' || str[0] == '-') && \
	str[1] == '0' && str[2] == '\0')
		return (0);
	return (1);
}
void	free_split(char **arr)
{
	int	i = 0;
	if (!arr)
		return;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
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
		free_split(temp);
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
	new_array = malloc(sizeof(char *) * count_total_words(argv) + 1);
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
		free_split(temp);
		i++;
	}
	new_array[k] = NULL;
	return (new_array);	
}

int	create_stack(char **argv, t_node **list)
{
	long long	result;
	int			j = 0;
	char		**temp;

	temp = get_new_argv(argv);
	if (!temp)
		return (0);
	while (temp[j])
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
