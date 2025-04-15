/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:07:15 by vimazuro          #+#    #+#             */
/*   Updated: 2025/01/30 14:28:23 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_2(t_list **a)
{
	int	first;
	int	second;

	first = *(int *)(*a)->content;
	second = *(int *)(*a)->next->content;
	if (first > second)
		sa(a);
}
