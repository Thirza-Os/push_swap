/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rules.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tosinga <tosinga@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/02 18:36:45 by tosinga       #+#    #+#                 */
/*   Updated: 2022/02/02 18:36:45 by tosinga       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_a(t_stacks *stacks)
{
	int	temp;

	if (stacks->count_a > 1)
	{
		temp = stacks->stack_a[0];
		stacks->stack_a[0] = stacks->stack_a[1];
		stacks->stack_a[1] = temp;
		ft_putstr_fd("sa\n", 1);
	}
}

void	ft_swap_b(t_stacks *stacks)
{
	int	temp;

	if (stacks->count_b > 1)
	{
		temp = stacks->stack_b[0];
		stacks->stack_b[0] = stacks->stack_b[1];
		stacks->stack_b[1] = temp;
		ft_putstr_fd("sb\n", 1);
	}
}

void	ft_sa_sb(t_stacks *stacks)
{
	ft_swap_a(stacks);
	ft_swap_b(stacks);
	ft_putstr_fd("ss\n", 1);
}

void	ft_push_a(t_stacks *stacks)
{
	int	i;
	int	counter_a;
	int	counter_b;

	i = 0;
	counter_a = stacks->count_a;
	counter_b = stacks->count_b;
	if (stacks->count_b >= 1)
	{
		while (counter_a > 0)
		{
			stacks->stack_a[counter_a] = stacks->stack_a[counter_a - 1];
			counter_a--;
		}
		stacks->stack_a[0] = stacks->stack_b[0];
		while (i < counter_b - 1)
		{
			stacks->stack_b[i] = stacks->stack_b[i + 1];
			i++;
		}
		stacks->count_a = stacks->count_a + 1;
		if (stacks->count_b > 0)
			stacks->count_b = stacks->count_b - 1;
		ft_putstr_fd("pa\n", 1);
	}
}

void	ft_push_b(t_stacks *stacks)
{
	int	i;
	int	counter_a;
	int	counter_b;

	i = 0;
	counter_a = stacks->count_a;
	counter_b = stacks->count_b;
	if (stacks->count_a >= 1)
	{
		while (counter_b > 0)
		{
			stacks->stack_b[counter_b] = stacks->stack_b[counter_b - 1];
			counter_b--;
		}
		stacks->stack_b[0] = stacks->stack_a[0];
		while (i < counter_a - 1)
		{
			stacks->stack_a[i] = stacks->stack_a[i + 1];
			i++;
		}
		stacks->count_b = stacks->count_b + 1;
		if (stacks->count_a > 0)
			stacks->count_a = stacks->count_a - 1;
		ft_putstr_fd("pb\n", 1);
	}
}
