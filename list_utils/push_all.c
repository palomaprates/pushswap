void push_all(Node **list1, Node **list2, char c)
{
	int size;
	int	i;
	size = get_list_size(list1);
	i = 0;
	while (i < size)
	{
		push(list1, list2, c);
		i++;
	}
}