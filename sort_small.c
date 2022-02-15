/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_small.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tosinga <tosinga@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/02 18:36:58 by tosinga       #+#    #+#                 */
/*   Updated: 2022/02/02 18:36:58 by tosinga       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(t_stacks *stacks)
{
	if (stacks->stack_a[0] < stacks->stack_a[1] && stacks->stack_a[1] \
		> stacks->stack_a[2] && stacks->stack_a[2] > stacks->stack_a[0])
	{
		ft_reverse_rotate_a(stacks);
		ft_swap_a(stacks);
	}
	if (stacks->stack_a[0] > stacks->stack_a[1] && stacks->stack_a[1] \
		< stacks->stack_a[2] && stacks->stack_a[2] > stacks->stack_a[0])
		ft_swap_a(stacks);
	if (stacks->stack_a[0] < stacks->stack_a[1] && stacks->stack_a[1] \
		> stacks->stack_a[2] && stacks->stack_a[2] < stacks->stack_a[0])
		ft_reverse_rotate_a(stacks);
	if (stacks->stack_a[0] > stacks->stack_a[1] && stacks->stack_a[1] \
		< stacks->stack_a[2] && stacks->stack_a[2] < stacks->stack_a[0])
		ft_rotate_a(stacks);
	if (stacks->stack_a[0] > stacks->stack_a[1] && stacks->stack_a[1] \
		> stacks->stack_a[2] && stacks->stack_a[2] < stacks->stack_a[0])
	{
		ft_rotate_a(stacks);
		ft_swap_a(stacks);
	}
}

void	ft_sort_small(t_stacks *stacks)
{
	if (stacks->count_a == 2)
		ft_swap_a(stacks);
	if (stacks->count_a == 3)
		ft_sort_three(stacks);
	if (stacks->count_a == 4)
		ft_sort_four(stacks);
	if (stacks->count_a == 5)
		ft_sort_five(stacks);
}
