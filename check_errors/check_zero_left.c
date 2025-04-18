#include "../push_swap.h"

int	has_only_zero(char *str)
{
	int	i;
	int	result;
	int	count;

	i = 0;
	result = 0;
	count = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		count++;
		i++;
	}
	while (str[i])
	{
		if (str[i] == '0')
			result++;
		i++;
	}
	if (ft_strlen(str) - count  == result)
		return (1);
	return (0);
}
int	is_left_zero(char *str)
{
	int	left_zero;
	
	left_zero = 0;
	while (str[left_zero] == '0')
		left_zero++;
	return (left_zero);
}