/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_steps_to_min.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:39:26 by vimazuro          #+#    #+#             */
/*   Updated: 2025/01/30 14:27:48 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_get_steps_to_min(t_list *a)
{
	int		min_num;
	int		steps;
	int		temp_steps;
	t_list	*temp;

	temp = a;
	min_num = *(int *)temp->content;
	steps = 0;
	temp_steps = 0;
	while (temp)
	{
		if (*(int *)temp->content < min_num)
		{
			min_num = *(int *)temp->content;
			steps = temp_steps;
		}
		temp = temp->next;
		temp_steps++;
	}
	return (steps);
}
