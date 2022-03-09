/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tosinga <tosinga@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/02 18:37:04 by tosinga       #+#    #+#                 */
/*   Updated: 2022/02/02 18:37:04 by tosinga       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	a;

	a = 0;
	while (s1[a] || s2[a])
	{
		if (s1[a] != s2[a])
			return ((unsigned char)s1[a] - (unsigned char)s2[a]);
		a++;
	}
	return ((unsigned char)s1[a] - (unsigned char)s2[a]);
}

void	ft_put_error(void)
{
	ft_putstr_fd("Error\n", 1);
	exit(1);
}

int	ft_check(long i)
{
	if (i < INT_MIN || i > INT_MAX)
		ft_put_error();
	return (1);
}

void	*ft_malloc_check(void *s)
{
	if (s == 0)
	{
		ft_putstr_fd("Error\n", 1);
		exit(1);
	}
	return (s);
}

int	atoi_stack(char *str, int *rs)
{
	long	i;
	int		c;

	i = 0;
	c = 1;
	if (*str == '-')
	{
		c = -1;
		str++;
	}
	while (*str)
	{
		if (ft_isdigit(*str))
		{
			i = (i * 10 + *str - '0');
			str++;
		}
		else
			ft_put_error();
	}
	i *= c;
	if ((ft_check(i) == 1))
		*rs = i;
	return (0);
}
