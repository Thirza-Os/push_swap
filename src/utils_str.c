/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils_str.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tosinga <tosinga@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/02 18:37:01 by tosinga       #+#    #+#                 */
/*   Updated: 2022/02/03 16:11:19 by tosinga       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_count_input(char	*argv[])
{
	int	i;

	i = 0;
	while (argv[i])
	{
		i++;
	}
	return (i);
}

int	ft_check_duplicates_str(char *argv[], int count_a)
{
	int	a;
	int	b;

	a = 0;
	while (a + 1 < count_a - 1)
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

int	ft_make_array_str(t_stacks *stacks, char *argv[])
{
	int	i;

	i = 0;
	stacks->stack_a = (int *)ft_malloc_check(malloc \
	(stacks->count_a * sizeof(int)));
	stacks->stack_b = (int *)ft_malloc_check(malloc \
	(stacks->count_a * sizeof(int)));
	while (stacks->count_a > i)
	{
		atoi_stack(argv[i], &stacks->stack_a[i]);
		i++;
	}
	return (0);
}
