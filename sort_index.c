/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_index.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tosinga <tosinga@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/02 18:36:55 by tosinga       #+#    #+#                 */
/*   Updated: 2022/02/02 18:36:55 by tosinga       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_bubble_sort(int	*index, int count)
{
	int	i;
	int	j;

	i = 0;
	while (i < count - 1)
	{
		j = 0;
		while (j < count - i - 1)
		{
			if (index[j] > index[j + 1])
				ft_swap(&index[j], &index[j + 1]);
		j++;
		}
	i++;
	}
}

void	ft_copy(t_stacks *stacks, int *temp)
{
	int	i;

	i = 0;
	while (i < stacks->count_a)
	{
		stacks->stack_a[i] = temp[i];
		i++;
	}
}

void	ft_replace_stack(int *index, t_stacks *stacks)
{
	int	counter_stack;
	int	counter_index;
	int	*temp;

	temp = (int *)ft_malloc_check(malloc(stacks->count_a * sizeof(int)));
	counter_stack = 0;
	while (counter_stack < stacks->count_a)
	{
		counter_index = 0;
		while (counter_index < stacks->count_a)
		{
			if (stacks->stack_a[counter_stack] == index[counter_index])
			{
				temp[counter_stack] = counter_index;
			}
		counter_index++;
		}
	counter_stack++;
	}
	ft_copy(stacks, temp);
	free(temp);
}

void	ft_index(t_stacks *stacks)
{
	int	i;
	int	*index;

	index = (int *)ft_malloc_check(malloc(stacks->count_a * sizeof(int)));
	i = 0;
	while (i < stacks->count_a)
	{
		index[i] = stacks->stack_a[i];
		i++;
	}
	ft_bubble_sort(index, stacks->count_a);
	ft_replace_stack(index, stacks);
	free(index);
}
