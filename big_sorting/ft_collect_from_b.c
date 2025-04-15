/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collect_from_b.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:57:43 by vimazuro          #+#    #+#             */
/*   Updated: 2025/01/30 14:26:12 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_collect_from_b(t_list **a, t_list **b)
{
	int	max_pos;
	int	size_b;
	int	rev_pos;

	while (*b)
	{
		max_pos = ft_get_steps_to_max(*b);
		size_b = ft_lstsize(*b);
		rev_pos = size_b - max_pos;
		if (max_pos <= rev_pos)
		{
			while (max_pos-- > 0)
				rb(b);
		}
		else
		{
			while (rev_pos-- > 0)
				rrb(b);
		}
		pa(a, b);
	}
}
