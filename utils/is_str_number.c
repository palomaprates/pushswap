#include "../push_swap.h"

int	is_str_number(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '-' || str[0] == '+')
		i++;
	while (str[i])
	{
		if (!(is_number(str[i])))
			return (0);
		i++;
	}
	return (1);
}
