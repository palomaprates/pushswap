int	get_binary_len(int nb, int size)
{
	int	i;
	int len;

	i = 0;
	len = 0;
	while (i < size)
	{
		if (nb % 2 != 0)
		{
			nb = nb / 2;
			len++;
		}
		i++;
	}
	return len;
}