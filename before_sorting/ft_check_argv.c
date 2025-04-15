/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_argv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:44:03 by vimazuro          #+#    #+#             */
/*   Updated: 2025/01/30 14:24:28 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_isdigit_argv(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	ft_compare_strings(char *str1, char *str2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (str1[i] == '+')
		i++;
	if (str2[j] == '+')
		j++;
	while (str1[i] && str2[j])
	{
		if (str1[i] != str2[j])
			return (0);
		i++;
		j++;
	}
	if (str1[i] != str2[j])
		return (0);
	return (1);
}

static int	ft_duplicate_argv(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_compare_strings(argv[i], argv[j]) == 1)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_check_argv(char **argv)
{
	int	i;
	int	error;

	i = 1;
	while (argv[i])
	{
		if (!(ft_isdigit_argv(argv[i])))
			ft_error_exit();
		ft_atoi(argv[i], &error);
		if (error)
			ft_error_exit();
		i++;
	}
	if (!(ft_duplicate_argv(argv)))
		ft_error_exit();
}
