#include "../push_swap.h"

void	radix_sort(Node **list, int size)
{
	int	i;
	int	bigger;
	int	binary_len;

	i = 0;
	bigger = get_bigger(*list, size);
	binary_len = get_binary_len(bigger);
	if (is_sorted(*list))
		return ;
	while (i < binary_len)
	{
		sort_list(list, size, i);
		i++;
	}
}
