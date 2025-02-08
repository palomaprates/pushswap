#include "../push_swap.h"

int	get_binary_len(int nb)
{
	int	len;

	len = 0;
	while (nb)
	{
		nb = nb / 2;
		len++;
	}
	return (len);
}
