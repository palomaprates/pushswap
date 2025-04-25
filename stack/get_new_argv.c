#include "../push_swap.h"

void	free_split(char **arr)
{
	int	i;

	i = 0;
	if (!arr)
		return ;
	while (arr[i])
	{
		free(arr[i]);
		arr[i] = NULL;
		i++;
	}
	free(arr);
	arr = NULL;
}
void	free_partial(char **arr, int filled)
{
	int i = 0;
	while (i < filled)
		free(arr[i++]);
	free(arr);
}

int	count_total_words(char **argv)
{
	int		total;
	char	**temp;
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

char	**get_new_argv(int argc, char **argv)
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
		{
			free_split(temp);
			free(new_array);
			return (NULL);
		}
		while (temp[j])
		{
			new_array[k] = ft_strdup(temp[j]);
			if (!new_array[k])
			{
				free_split(temp);
				free_partial(new_array, k);
				return (NULL);
			}
			j++;
			k++;
		}
		free_split(temp);
		i++;
	}
	new_array[k] = NULL;
	return (new_array);
}
