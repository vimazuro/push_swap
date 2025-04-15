/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:00:47 by vimazuro          #+#    #+#             */
/*   Updated: 2024/11/29 11:43:36 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_list **a)
{
	t_list	*prev_tail;
	t_list	*tail;

	if (*a && (*a)->next)
	{
		prev_tail = *a;
		tail = ft_lstlast(*a);
		while (prev_tail->next->next != NULL)
			prev_tail = prev_tail->next;
		prev_tail->next = NULL;
		tail->next = *a;
		*a = tail;
	}
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_list **b)
{
	t_list	*prev_tail;
	t_list	*tail;

	if (*b && (*b)->next)
	{
		prev_tail = *b;
		tail = ft_lstlast(*b);
		while (prev_tail->next->next != NULL)
			prev_tail = prev_tail->next;
		prev_tail->next = NULL;
		tail->next = *b;
		*b = tail;
	}
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_list **a, t_list **b)
{
	t_list	*prev_tail;
	t_list	*tail;

	if (*a && (*a)->next)
	{
		prev_tail = *a;
		tail = ft_lstlast(*a);
		while (prev_tail->next->next != NULL)
			prev_tail = prev_tail->next;
		prev_tail->next = NULL;
		tail->next = *a;
		*a = tail;
	}
	if (*b && (*b)->next)
	{
		prev_tail = *b;
		tail = ft_lstlast(*b);
		while (prev_tail->next->next != NULL)
			prev_tail = prev_tail->next;
		prev_tail->next = NULL;
		tail->next = *b;
		*b = tail;
	}
	ft_putstr_fd("rrr\n", 1);
}
