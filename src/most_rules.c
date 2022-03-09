/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   most_rules.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tosinga <tosinga@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/02 18:36:10 by tosinga       #+#    #+#                 */
/*   Updated: 2022/02/02 18:36:10 by tosinga       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate_b(t_stacks *stacks)
{
	int	copy;
	int	counter_b;

	counter_b = stacks->count_b - 1;
	copy = stacks->stack_b[stacks->count_b - 1];
	while (counter_b > 0)
	{
		stacks->stack_b[counter_b] = stacks->stack_b[counter_b - 1];
		counter_b--;
	}
	stacks->stack_b[0] = copy;
	ft_putstr_fd("rra\n", 1);
}

void	ft_rra_rrb(t_stacks *stacks)
{
	ft_reverse_rotate_a(stacks);
	ft_reverse_rotate_b(stacks);
	ft_putstr_fd("rrr\n", 1);
}
