/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_big_integer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 15:17:39 by pprates-          #+#    #+#             */
/*   Updated: 2025/05/03 15:17:40 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_big_integer(char *str)
{
	if (ft_strlen(str) > 11 && is_left_zero(str) > 1)
		return (0);
	else if (ft_strlen(str) > 11 && is_left_zero(str) <= 1)
		return (1);
	return (0);
}
