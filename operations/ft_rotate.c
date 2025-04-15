/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:51:45 by vimazuro          #+#    #+#             */
/*   Updated: 2024/11/29 11:43:53 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_list **a)
{
	t_list	*head;
	t_list	*tail;

	if (*a && (*a)->next)
	{
		head = *a;
		*a = (*a)->next;
		tail = ft_lstlast(*a);
		head->next = NULL;
		tail->next = head;
	}
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_list **b)
{
	t_list	*head;
	t_list	*tail;

	if (*b && (*b)->next)
	{
		head = *b;
		*b = (*b)->next;
		tail = ft_lstlast(*b);
		head->next = NULL;
		tail->next = head;
	}
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_list **a, t_list **b)
{
	t_list	*head;
	t_list	*tail;

	if (*a && (*a)->next)
	{
		head = *a;
		*a = (*a)->next;
		tail = ft_lstlast(*a);
		head->next = NULL;
		tail->next = head;
	}
	if (*b && (*b)->next)
	{
		head = *b;
		*b = (*b)->next;
		tail = ft_lstlast(*b);
		head->next = NULL;
		tail->next = head;
	}
	ft_putstr_fd("rr\n", 1);
}
