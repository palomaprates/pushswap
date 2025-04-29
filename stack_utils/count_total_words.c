#include "../push_swap.h"

int	count_total_words(char **argv)
{
	char	**temp;
	int		total;
	int		i;
	int		j;

	total = 0;
	i = 1;
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
