#include "../push_swap.h"

int	is_big_integer(char *str)
{
	if (ft_strlen(str) > 11 && is_left_zero(str) > 1)
		return (0);
	else if (ft_strlen(str) > 11 && is_left_zero(str) <= 1)
		return (1);
	return (0);
}
