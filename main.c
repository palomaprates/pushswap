#include "push_swap.h"
#include <limits.h>

int ft_strlen(char *str)
{
	int i; 
	i = 0;
	while(str[i])
		i++;
	return (i);
}
int is_str_number(char *str)
{
	int i;

	i = 0;
	if (str[0] == '-' || str[0] == '+')
		i++;
	while (str[i])
	{
		if (!(is_number(str[i])))
			return (0);
		i++;
	}
	return (1);
}

int create_stack(int size, char **str, Node **list)
{
	int i; 
	long long result;
	i = 1;
	while (i < size)
	{
		if (!(is_str_number(str[i])) || ft_strlen(str[i]) > 11)
			return (0);
		result = ft_atoi(str[i]);
		if (result > INT_MAX || result < INT_MIN)
			return (0);
		add_back(list, result);
		i++;
	}
	return (1);
}

int main(int argc, char *argv[])
{
	int i;
	i = 1;
	Node *list;
	list = NULL;
	if (argc <= 1)
		return (0);

	if (!create_stack(argc, argv, &list))
	{
		printf("Error");
		return (0);
	}
	print_list(&list);
}