/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 14:34:21 by vimazuro          #+#    #+#             */
/*   Updated: 2025/01/30 14:28:41 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_3(t_list **a)
{
	int	first;
	int	second;
	int	third;

	first = *(int *)(*a)->content;
	second = *(int *)(*a)->next->content;
	third = *(int *)(*a)->next->next->content;
	if (first > second && first > third)
	{
		ra(a);
		if (second > third)
			sa(a);
	}
	else if (first < second && first < third)
	{
		sa(a);
		ra(a);
	}
	else
	{
		if (second > third)
			rra(a);
		else
			sa(a);
	}
}
