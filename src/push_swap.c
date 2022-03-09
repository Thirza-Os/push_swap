#include "libft.h"
#include <stdio.h>

typedef struct s_stacks {
	int	*stack_a;
	int	*stack_b;
}	t_stacks;

t_list	*ft_swap_a(t_stacks *stacks, t_list *ret_list)
{
	int	*temp;

	ret_list = ft_lstnew("sa");
	temp = &stacks->stack_a[0];
	stacks->stack_a[0] = stacks->stack_a[1];
	stacks->stack_a[1] = *temp;
	while(ret_list)
	{
	printf("%s", ret_list->content);
	ret_list = ret_list->next;
	}
	return(ret_list);
}

void	ft_sort_small(t_stacks *stacks, int count)
{
	t_list	ret_list;

	if (count == 2)
		ft_swap_a(stacks, &ret_list);
}

int	swap_strncmp(const char *s1, const char *s2)
{
	size_t	a;

	a = 0;
	while (s1[a] || s2[a])
	{
		if (s1[a] != s2[a])
			return ((unsigned char)s1[a] - (unsigned char)s2[a]);
		a++;
	}
	return ((unsigned char)s1[a] - (unsigned char)s2[a]);
}

int	ft_check_duplicates(char *argv[])
{
	int a;
	int	b;

	a = 1;
	b = 2;
	while (argv[a])
	{
		while(argv[b])
		{
		if (swap_strncmp(argv[a], argv[b]) == 0)
			{
				ft_putstr_fd("Error\n", 1);
				exit(0);
			}
			b++;
		}
	a++;
	}
	return (0);
}

int	ft_check(long i)
{
	if (i < INT_MIN || i > INT_MAX)
	{
		ft_putstr_fd("Error\n", 1);
		exit(0);
	}
	return (1);
}

int	atoi_stack(char *str, int *rs)
{
	long	i;
	int		c;

	i = 0;
	c = 1;
	if (*str == '-')
	{
		c = -1;
		str++;
	}
	while (*str)
		if (ft_isdigit(*str))
		{
			i = (i * 10 + *str - '0');
			str++;
		}
		else
		{
			ft_putstr_fd("Error\n", 1);
			exit(0);
		}
	i *= c;
	if((ft_check(i) == 1))
		*rs = i;
	return(0);
}

void	*ft_malloc_check(void *s)
{
	if (s == 0)
		exit(0);
	return (s);
}

int	ft_make_array(t_stacks *stacks, char *argv[], int count)
{
	int	i;

	i = 0;
	stacks->stack_a = (int *)ft_malloc_check(malloc(count * sizeof(int)));
	stacks->stack_b = (int *)ft_malloc_check(malloc(count * sizeof(int)));
	while (count > i)
	{
		if(atoi_stack(argv[i + 1], &stacks->stack_a[i]))
			exit (0);
		i++;
	}
	return (0);
}

int	ft_check_order(t_stacks *stacks, int count)
{
	int	i;
	int a;

	i = 0;
	a = 0;
	while (stacks->stack_a[i + 1])
	{
		if (stacks->stack_a[i] < stacks->stack_a[i + 1])
			a++;
	i++;
	}
	if (a + 1 == count)
		{
		ft_putstr_fd("in order\n", 1);
		exit(0);
		}
return (0);
}

int	main(int argc, char *argv[])
{
	t_stacks	stacks;
	int			count;

	count = argc - 1;
	if (argc < 1)
	{
		ft_putstr_fd("Error\n", 1);
		exit (0);
	}
	ft_check_duplicates(argv);
	ft_make_array(&stacks, argv, count);
	ft_check_order(&stacks, count);
	if (count <= 5)
		ft_sort_small(&stacks, count);
	// if (count > 5)
		// ft_sort_big(&stacks, count);
	//ft_free(stack_a);
	//ft_free(stack_B);
	return (0);
}
