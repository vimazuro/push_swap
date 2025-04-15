/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sorting.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:45:40 by vimazuro          #+#    #+#             */
/*   Updated: 2025/01/30 14:25:53 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_big_sorting(t_list **a, t_list **b)
{
	int	chunk_size;

	if (ft_lstsize(*a) > 200)
		chunk_size = 60;
	else
		chunk_size = 40;
	ft_split_into_chunks(a, b, chunk_size);
	ft_collect_from_b(a, b);
}
