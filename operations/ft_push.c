/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 10:58:11 by vimazuro          #+#    #+#             */
/*   Updated: 2024/11/29 11:43:19 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_list **a, t_list **b)
{
	t_list	*tmp_b;

	if (!a || !*a)
		return ;
	tmp_b = *a;
	*a = (*a)->next;
	tmp_b->next = *b;
	*b = tmp_b;
	ft_putstr_fd("pb\n", 1);
}

void	pa(t_list **a, t_list **b)
{
	t_list	*tmp_a;

	if (!b || !*b)
		return ;
	tmp_a = *b;
	*b = (*b)->next;
	tmp_a->next = *a;
	*a = tmp_a;
	ft_putstr_fd("pa\n", 1);
}
