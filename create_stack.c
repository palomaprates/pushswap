#include "push_swap.h"

int	create_stack(int size, char **argv, Node **list)
{
	int	i;
	long long	result;

	i = 1;
	while (i < size)
	{
		if (argv[i][0] == '\0')
		{
			ft_lstclear(list);
			return (0);
		}
		if (!(is_str_number(argv[i])) || ft_strlen(argv[i]) > 11)
		{
			ft_lstclear(list);
			return (0);
		}
		result = ft_atoi(argv[i]);
		if (is_duplicate(argv, i))
		{
			ft_lstclear(list);
			return (0);
		}
		if (result > INT_MAX || result < INT_MIN)
			return (0);
		add_back(list, result, 0);
		i++;
	}
	return (1);
}
