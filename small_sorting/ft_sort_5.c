/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:00:14 by vimazuro          #+#    #+#             */
/*   Updated: 2025/01/30 15:32:39 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_5(t_list **a, t_list **b)
{
	int	turn;
	int	rev_turn;

	turn = ft_get_steps_to_max(*a);
	rev_turn = 5 - turn;
	if (turn <= rev_turn)
	{
		while (turn-- > 0)
			ra(a);
	}
	else
	{
		while (rev_turn-- > 0)
			rra(a);
	}
	pb(a, b);
	if (!ft_check_sorting(a))
		ft_sort_4(a, b);
	pa(a, b);
	ra(a);
}
