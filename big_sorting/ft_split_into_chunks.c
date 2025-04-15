/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_into_chunks.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:47:53 by vimazuro          #+#    #+#             */
/*   Updated: 2025/01/30 14:26:52 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static t_bounds	ft_get_bounds(int *sort, t_sizes sizes, int chunk_index)
{
	t_bounds	bounds;

	bounds.min = sort[chunk_index * sizes.chunk_size];
	if ((chunk_index + 1) * sizes.chunk_size > sizes.size)
		bounds.max = sort[sizes.size - 1];
	else
		bounds.max = sort[(chunk_index + 1) * sizes.chunk_size - 1];
	return (bounds);
}

static void	ft_move_to_b(t_list **a, t_list **b, int *sort, t_sizes sizes)
{
	int			i;
	int			chunk_index;
	t_bounds	bounds;

	i = 0;
	chunk_index = 0;
	while (i < sizes.size)
	{
		bounds = ft_get_bounds(sort, sizes, chunk_index);
		if (*(int *)(*a)->content >= bounds.min
				&& *(int *)(*a)->content <= bounds.max)
		{
			pb(a, b);
			if (*(int *)(*b)->content < (bounds.min + bounds.max) / 2)
				rb(b);
			i++;
		}
		else
			ra(a);
		if (i >= (chunk_index + 1) * sizes.chunk_size)
			chunk_index++;
	}
}

void	ft_split_into_chunks(t_list **a, t_list **b, int chunk_size)
{
	int		*sort;
	t_sizes	sizes;

	sizes.size = ft_lstsize(*a);
	sizes.chunk_size = chunk_size;
	sort = ft_get_sorted_array(*a, sizes.size);
	ft_move_to_b(a, b, sort, sizes);
	free(sort);
}
