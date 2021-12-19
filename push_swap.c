#include <libft.h>
#include <stdio.h>

typedef struct s_stacks {
	int	*stack_a;
	int	*stack_b;
}	t_stacks;

static int	ft_check(long i, int c)
{
	if (i < INT_MIN || i > INT_MAX)
	{
		if (c > 0 || c < 0)
			return 1;
	}
	return (0);
}

static int	ft_atoi(const char *str, int *rs)
{
	long	i;
	int		c;

	i = 0;
	c = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		c = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		i = (i * 10 + *str - '0');
		str++;
	}
	if((ft_check(i * c, c)))
		return(1);
	return(0);
}

static int	ft_check_input(char *s[], int argc)
{
	int	i;
	int	count;

	count = 1;
	i = 0;
	while (count < argc)
	{
		while (s[count][i])
		{
			if (!ft_isdigit(s[count][i]))
				return (-1);
		i++;
		}
	i = 0;
	count++;
	}

	return (count - 1);
}

void	*ft_malloc_check(void *s)
{
	if (s == 0)
		exit(0);
	return (s);
}

static int	ft_make_array(t_stacks *stacks, char *argv, int count)
{
	int	i;

	i = 0;
	stacks->stack_a = (int *)ft_malloc_check(malloc(count * sizeof(int)));
	stacks->stack_b = (int *)ft_malloc_check(malloc(count * sizeof(int)));
	while (count - 1 > i)
	{
		if(ft_atoi(argv[i], &stacks->stack_a[i]));
			exit(0);
		i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int			count;
	t_stacks	stacks;

	stacks.stack_a
	if (argc < 1)
	{
		ft_putstr_fd("Error\n", 1);
		return (1);
	}
	count = (ft_check_input(argv, argc));
	if (count < 0)
	{
		ft_putstr_fd("Error\n", 1);
		return (1);
	}
	ft_make_array(&stacks, count);
	//ft_free(stack_a);
	//ft_free(stack_B);
	return (0);
}
