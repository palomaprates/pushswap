/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_splited_argv.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 15:19:13 by pprates-          #+#    #+#             */
/*   Updated: 2025/05/03 15:19:14 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	get_new_array(char **new_array, char **temp, int j, int *k)
{
	while (temp[j])
	{
		new_array[*k] = ft_strdup(temp[j]);
		if (!new_array[*k])
		{
			free_split(temp);
			free_partial(new_array, *k);
			return ;
		}
		j++;
		(*k)++;
	}
}

char	**get_splited_argv(int argc, char **argv)
{
	char	**new_array;
	char	**temp;
	int		i;
	int		j;
	int		k;

	i = 1;
	k = 0;
	new_array = malloc(sizeof(char *) * (count_total_words(argv) + 1));
	if (!new_array)
		return (NULL);
	while (i < argc)
	{
		temp = ft_split(argv[i], ' ');
		j = 0;
		if (!temp)
			return (NULL);
		if (!temp[0])
			return (free_split(temp), free(new_array), NULL);
		get_new_array(new_array, temp, j, &k);
		free_split(temp);
		i++;
	}
	new_array[k] = NULL;
	return (new_array);
}
