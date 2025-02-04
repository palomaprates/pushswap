#include "../push_swap.h"

int	get_binary_len(int nb)
{
	int	i;
	int len;

	i = 0;
	len = 0;
	while (nb)
	{
			nb = nb / 2;
			len++;
	}

	return len;
}