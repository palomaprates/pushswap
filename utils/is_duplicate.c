/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_duplicate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paloma <paloma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:39:11 by pprates-          #+#    #+#             */
/*   Updated: 2025/04/16 20:03:19 by paloma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_duplicate(char **argv, int index)
{
	int	current;

	current = index;
	while (argv[index + 1])
	{
		if (ft_atoi(argv[current]) == ft_atoi(argv[index + 1]))
			return (1);
		index++;
	}
	return (0);
}
