/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_small_sorting.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 14:12:16 by vimazuro          #+#    #+#             */
/*   Updated: 2025/01/30 14:28:07 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_small_sorting(t_list **a, t_list **b)
{
	t_list	*head;

	head = *a;
	if (ft_lstsize(*a) == 2)
		ft_sort_2(a);
	else if (ft_lstsize(*a) == 3)
		ft_sort_3(a);
	else if (ft_lstsize(*a) == 4)
		ft_sort_4(a, b);
	else if (ft_lstsize(*a) == 5)
		ft_sort_5(a, b);
}
