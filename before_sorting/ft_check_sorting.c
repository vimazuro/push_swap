/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sorting.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:20:08 by vimazuro          #+#    #+#             */
/*   Updated: 2025/01/30 14:24:48 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_check_sorting(t_list **a)
{
	t_list	*head;

	head = *a;
	while (head && head->next)
	{
		if (*(int *)(head->content) > *(int *)(head->next->content))
			return (0);
		head = head->next;
	}
	return (1);
}
