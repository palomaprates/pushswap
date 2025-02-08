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
