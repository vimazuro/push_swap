/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:30:27 by vimazuro          #+#    #+#             */
/*   Updated: 2025/01/30 15:42:40 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_4(t_list **a, t_list **b)
{
	int	turn;
	int	rev_turn;

	turn = ft_get_steps_to_min(*a);
	rev_turn = 4 - turn;
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
	if (!ft_check_sorting(a))
	{
		pb(a, b);
		ft_sort_3(a);
		pa(a, b);
	}
}
