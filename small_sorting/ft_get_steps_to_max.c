/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_steps_to_max.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:51:10 by vimazuro          #+#    #+#             */
/*   Updated: 2025/01/30 14:27:31 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_get_steps_to_max(t_list *a)
{
	int		max_num;
	int		steps;
	int		temp_steps;
	t_list	*temp;

	temp = a;
	max_num = *(int *)temp->content;
	steps = 0;
	temp_steps = 0;
	while (temp)
	{
		if (*(int *)temp->content > max_num)
		{
			max_num = *(int *)temp->content;
			steps = temp_steps;
		}
		temp = temp->next;
		temp_steps++;
	}
	return (steps);
}
