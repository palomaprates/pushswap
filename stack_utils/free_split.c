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
	int	i;

	i = 0;
	while (i < filled)
		free(arr[i++]);
	free(arr);
}
