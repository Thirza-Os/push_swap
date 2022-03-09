/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tosinga <tosinga@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/02 18:31:14 by tosinga       #+#    #+#                 */
/*   Updated: 2022/02/03 16:29:11 by tosinga       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

int	ft_check_duplicates(char *argv[], int argc)
{
	int	a;
	int	b;

	a = 1;
	while (a + 1 < argc)
	{
		b = a + 1;
		while (argv[b])
		{
			if (ft_strcmp(argv[a], argv[b]) == 0)
			{
				ft_putstr_fd("Error\n", 1);
				exit(1);
			}
			b++;
		}
	a++;
	}
	return (0);
}

int	ft_make_array(t_stacks *stacks, char *argv[])
{
	int	i;

	i = 0;
	stacks->stack_a = (int *)ft_malloc_check(malloc \
	(stacks->count_a * sizeof(int)));
	stacks->stack_b = (int *)ft_malloc_check(malloc \
	(stacks->count_a * sizeof(int)));
	while (stacks->count_a > i)
	{
		atoi_stack(argv[i + 1], &stacks->stack_a[i]);
		i++;
	}
	return (0);
}

int	ft_check_order(t_stacks *stacks)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (i < stacks->count_a - 1)
	{
		if (stacks->stack_a[i] < stacks->stack_a[i + 1])
			a++;
	i++;
	}
	if (a + 1 == stacks->count_a)
		exit(1);
	return (0);
}

void	ft_str_input(char *argv[], t_stacks *stacks)
{
	argv = ft_split(argv[1], ' ');
	stacks->count_a = ft_count_input(argv);
	ft_check_duplicates_str(argv, stacks->count_a);
	ft_make_array_str(stacks, argv);
	ft_free(argv);
}

int	main(int argc, char *argv[])
{
	t_stacks	stacks;

	stacks.count_a = argc - 1;
	stacks.count_b = 0;
	if (argc < 1)
		exit(1);
	if (argc == 2)
		ft_str_input(argv, &stacks);
	else
	{
		ft_check_duplicates(argv, argc);
		ft_make_array(&stacks, argv);
	}
	ft_check_order(&stacks);
	if (stacks.count_a <= 5)
		ft_sort_small(&stacks);
	else
		ft_sort_big(&stacks);
	free(stacks.stack_a);
	free(stacks.stack_b);
	return (0);
}
