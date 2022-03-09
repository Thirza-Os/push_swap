/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   more_rules.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tosinga <tosinga@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/02 18:36:04 by tosinga       #+#    #+#                 */
/*   Updated: 2022/02/02 18:36:04 by tosinga       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_a(t_stacks *stacks)
{
	int	i;
	int	copy;

	i = 0;
	copy = stacks->stack_a[0];
	while (i < stacks->count_a - 1)
	{
		stacks->stack_a[i] = stacks->stack_a[i + 1];
		i++;
	}
	stacks->stack_a[stacks->count_a - 1] = copy;
	ft_putstr_fd("ra\n", 1);
}

void	ft_rotate_b(t_stacks *stacks)
{
	int	i;
	int	copy;

	i = 0;
	copy = stacks->stack_b[0];
	while (i < stacks->count_b - 1)
	{
		stacks->stack_b[i] = stacks->stack_b[i + 1];
		i++;
	}
	stacks->stack_b[stacks->count_b - 1] = copy;
	ft_putstr_fd("rb\n", 1);
}

void	ft_ra_rb(t_stacks *stacks)
{
	ft_rotate_a(stacks);
	ft_rotate_b(stacks);
	ft_putstr_fd("rr\n", 1);
}

void	ft_reverse_rotate_a(t_stacks *stacks)
{
	int	copy;
	int	counter_a;

	counter_a = stacks->count_a - 1;
	copy = stacks->stack_a[stacks->count_a - 1];
	while (counter_a > 0)
	{
		stacks->stack_a[counter_a] = stacks->stack_a[counter_a - 1];
		counter_a--;
	}
	stacks->stack_a[0] = copy;
	ft_putstr_fd("rra\n", 1);
}
