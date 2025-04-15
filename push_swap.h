/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:14:24 by vimazuro          #+#    #+#             */
/*   Updated: 2025/01/30 12:38:33 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/include/libft.h"
# include "libft/include/ft_printf.h"
# include <stdlib.h>

typedef struct s_sizes
{
	int	size;
	int	chunk_size;
}		t_sizes;

typedef struct s_bounds
{
	int	min;
	int	max;
}		t_bounds;

int		main(int argc, char **argv);
int		ft_check_sorting(t_list **a);
int		ft_get_steps_to_min(t_list *a);
int		ft_get_steps_to_max(t_list *a);
int		*ft_get_sorted_array(t_list *a, int size);
void	ft_make_stacks(t_list **a, t_list **b, char **argv);
void	ft_check_argv(char **argv);
void	ft_error_exit(void);
void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);
void	ft_small_sorting(t_list **a, t_list **b);
void	ft_sort_2(t_list **a);
void	ft_sort_3(t_list **a);
void	ft_sort_4(t_list **a, t_list **b);
void	ft_sort_5(t_list **a, t_list **b);
void	ft_big_sorting(t_list **a, t_list **b);
void	ft_split_into_chunks(t_list **a, t_list **b, int chunk_size);
void	ft_collect_from_b(t_list **a, t_list **b);

#endif
