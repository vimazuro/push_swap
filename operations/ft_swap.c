/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:03:40 by vimazuro          #+#    #+#             */
/*   Updated: 2024/11/29 11:42:58 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_list **a)
{
	t_list	*tmp;

	if (*a && (*a)->next)
	{
		tmp = *a;
		*a = (*a)->next;
		tmp->next = (*a)->next;
		(*a)->next = tmp;
	}
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_list **b)
{
	t_list	*tmp;

	if (*b && (*b)->next)
	{
		tmp = *b;
		*b = (*b)->next;
		tmp->next = (*b)->next;
		(*b)->next = tmp;
	}
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (*a && (*a)->next)
	{
		tmp = *a;
		*a = (*a)->next;
		tmp->next = (*a)->next;
		(*a)->next = tmp;
	}
	if (*b && (*b)->next)
	{
		tmp = *b;
		*b = (*b)->next;
		tmp->next = (*b)->next;
		(*b)->next = tmp;
	}
	ft_putstr_fd("ss\n", 1);
}
