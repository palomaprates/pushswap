#include "../push_swap.h"

int	valid_number(char *str)
{
	if (!*str || ((str[0] == '+' || str[0] == '-') && \
(str[1] == '0' || !str[1]) && str[2] == '\0'))
		return (0);
	if ((str[0] == '+' || str[0] == '-') && has_only_zero(str))
		return (0);
	return (1);
}
