/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_big.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tosinga <tosinga@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/02 18:36:48 by tosinga       #+#    #+#                 */
/*   Updated: 2022/02/02 18:36:48 by tosinga       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_fill_a(t_stacks *stacks)
{
	int	i;
	int	counter;

	i = 0;
	counter = stacks->count_b;
	while (i < counter)
	{
		ft_push_a(stacks);
		i++;
	}
}

void	ft_execute_radix_rules(t_stacks *stacks, int i)
{
	if (((stacks->stack_a[0] >> i) & 1) == 1)
		ft_rotate_a(stacks);
	else
		ft_push_b(stacks);
}

int	ft_calc_max_bit(int size)
{
	int	max_bit;

	max_bit = 0;
	while (((size) >> max_bit) != 0)
		max_bit++;
	return (max_bit - 1);
}

void	ft_radix_sort(t_stacks *stacks)
{
	int	max_bit;
	int	size;
	int	i;
	int	j;

	size = stacks->count_a;
	max_bit = ft_calc_max_bit(size - 1);
	i = 0;
	while (i <= max_bit)
	{
		j = 0;
		while (j < size)
		{
			ft_execute_radix_rules(stacks, i);
		j++;
		}
		ft_fill_a(stacks);
	i++;
	}
}

void	ft_sort_big(t_stacks *stacks)
{
	ft_index(stacks);
	ft_radix_sort(stacks);
}
