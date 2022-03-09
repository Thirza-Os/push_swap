/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tosinga <tosinga@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/02 18:36:39 by tosinga       #+#    #+#                 */
/*   Updated: 2022/02/03 11:09:17 by tosinga       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdio.h>

typedef struct s_stacks {
	int	*stack_a;
	int	*stack_b;
	int	count_a;
	int	count_b;
}	t_stacks;

void	ft_swap_a(t_stacks *stacks);
void	ft_swap_b(t_stacks *stacks);
void	ft_sa_sb(t_stacks *stacks);
void	ft_push_a(t_stacks *stacks);
void	ft_push_b(t_stacks *stacks);
void	ft_rotate_a(t_stacks *stacks);
void	ft_rotate_b(t_stacks *stacks);
void	ft_ra_rb(t_stacks *stacks);
void	ft_reverse_rotate_a(t_stacks *stacks);
void	ft_reverse_rotate_b(t_stacks *stacks);
void	ft_rra_rrb(t_stacks *stacks);
int		ft_check_order(t_stacks *stacks);
int		ft_make_array(t_stacks *stacks, char *argv[]);
int		ft_check_duplicates(char *argv[], int argc);
int		atoi_stack(char *str, int *rs);
void	*ft_malloc_check(void *s);
int		ft_check(long i);
void	ft_put_error(void);
int		ft_strcmp(const char *s1, const char *s2);
void	ft_sort_small(t_stacks *stacks);
void	ft_sort_three(t_stacks *stacks);
int		ft_get_lowest(t_stacks *stacks);
void	ft_sort_four(t_stacks *stacks);
void	ft_make_a(t_stacks *stacks, int num);
void	ft_sort_five(t_stacks *stacks);
void	ft_sort_big(t_stacks *stacks);
void	ft_fill_a(t_stacks *stacks);
void	ft_execute_radix_rules(t_stacks *stacks, int i);
void	ft_radix_sort(t_stacks *stacks);
void	ft_index(t_stacks *stacks);
int		ft_check(long i);
int		ft_strcmp(const char *s1, const char *s2);
int		atoi_stack(char *str, int *rs);
char	**ft_split_input(char *argv[]);
int		ft_check_duplicates_str(char *argv[], int argc);
int		ft_make_array_str(t_stacks *stacks, char *argv[]);
int		ft_count_input(char	*argv[]);
#endif
