#include "push_swap.h"

int create_stack(int size, char **str, Node **list)
{
	int i; 
	long long result;
	
	i = 1;
	while (i < size)
	{
		if (!(is_str_number(str[i])) || ft_strlen(str[i]) > 11)
			return (0);
		result = ft_atoi(str[i]);
		if (result > INT_MAX || result < INT_MIN)
			return (0);
		add_back(list, result);
		i++;
	}
	return (1);
}