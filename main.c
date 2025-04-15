/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:37:19 by vimazuro          #+#    #+#             */
/*   Updated: 2025/01/29 14:39:04 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;

	if (argc <= 2)
		exit(0);
	ft_check_argv(argv);
	ft_make_stacks(&a, &b, argv);
	if (ft_check_sorting(&a))
	{
		ft_lstclear(&a, free);
		ft_lstclear(&b, free);
		return (0);
	}
	if (ft_lstsize(a) <= 5)
		ft_small_sorting(&a, &b);
	else
		ft_big_sorting(&a, &b);
	ft_lstclear(&a, free);
	ft_lstclear(&b, free);
	return (0);
}
