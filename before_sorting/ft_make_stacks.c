/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_stacks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:47:57 by vimazuro          #+#    #+#             */
/*   Updated: 2025/01/30 14:25:24 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_make_stacks(t_list **a, t_list **b, char **argv)
{
	int	i;
	int	*number;
	int	error;

	*a = NULL;
	*b = NULL;
	i = 1;
	while (argv[i])
	{
		number = malloc(sizeof(int));
		if (!number)
		{
			ft_lstclear(a, free);
			ft_error_exit();
		}
		*number = ft_atoi(argv[i], &error);
		ft_lstadd_back(a, ft_lstnew(number));
		i++;
	}
}
