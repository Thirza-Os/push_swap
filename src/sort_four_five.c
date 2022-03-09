/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_four_five.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tosinga <tosinga@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/02 18:36:51 by tosinga       #+#    #+#                 */
/*   Updated: 2022/02/02 18:36:51 by tosinga       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_make_a(t_stacks *stacks, int num)
{
	if (stacks->stack_a[0] == num)
		ft_push_b(stacks);
	if (stacks->stack_a[1] == num)
	{
		ft_rotate_a(stacks);
		ft_push_b(stacks);
	}
	if (stacks->stack_a[2] == num)
	{
		ft_rotate_a(stacks);
		ft_rotate_a(stacks);
		ft_push_b(stacks);
	}
	if (stacks->stack_a[3] == num)
	{
		ft_reverse_rotate_a(stacks);
		ft_reverse_rotate_a(stacks);
		ft_push_b(stacks);
	}
	if (stacks->stack_a[4] == num)
	{
		ft_reverse_rotate_a(stacks);
		ft_push_b(stacks);
	}
}

int	ft_get_lowest(t_stacks *stacks)
{
	int	i;
	int	num;

	i = 1;
	num = stacks->stack_a[0];
	while (i < stacks->count_a)
	{
		if (stacks->stack_a[i] < num)
			num = stacks->stack_a[i];
	i++;
	}
	return (num);
}

void	ft_rules_sort_four(t_stacks *stacks, int num)
{
	if (stacks->stack_a[1] == num)
	{
		ft_rotate_a(stacks);
		ft_push_b(stacks);
		ft_sort_three(stacks);
		ft_push_a(stacks);
	}
	if (stacks->stack_a[2] == num)
	{
		ft_reverse_rotate_a(stacks);
		ft_reverse_rotate_a(stacks);
		ft_push_b(stacks);
		ft_sort_three(stacks);
		ft_push_a(stacks);
	}
	if (stacks->stack_a[3] == num)
	{
		ft_reverse_rotate_a(stacks);
		ft_push_b(stacks);
		ft_sort_three(stacks);
		ft_push_a(stacks);
	}
}

void	ft_sort_four(t_stacks *stacks)
{
	int	num;

	num = ft_get_lowest(stacks);
	if (stacks->stack_a[0] == num)
	{
		ft_push_b(stacks);
		ft_sort_three(stacks);
		ft_push_a(stacks);
	}
	ft_rules_sort_four(stacks, num);
}

void	ft_sort_five(t_stacks *stacks)
{
	int	num;

	num = ft_get_lowest(stacks);
	ft_make_a(stacks, num);
	ft_sort_four(stacks);
	ft_sort_three(stacks);
	ft_push_a(stacks);
	ft_push_a(stacks);
}
