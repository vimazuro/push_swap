/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_sorted_array.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 10:45:49 by vimazuro          #+#    #+#             */
/*   Updated: 2025/01/30 14:26:33 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_partition_array(int *arr, int low, int high)
{
	int	pivot;
	int	i;
	int	j;
	int	temp;

	pivot = arr[high];
	i = low - 1;
	j = low;
	while (j < high)
	{
		if (arr[j] < pivot)
		{
			i++;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
		j++;
	}
	temp = arr[i + 1];
	arr[i + 1] = arr[high];
	arr[high] = temp;
	return (i + 1);
}

static void	ft_quicksort(int *arr, int low, int high)
{
	int	pivot;

	if (low < high)
	{
		pivot = ft_partition_array(arr, low, high);
		ft_quicksort(arr, low, pivot - 1);
		ft_quicksort(arr, pivot + 1, high);
	}
}

int	*ft_get_sorted_array(t_list *a, int size)
{
	int		*arr;
	int		i;
	t_list	*temp;

	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);
	temp = a;
	i = 0;
	while (temp && i < size)
	{
		arr[i] = *(int *)(temp->content);
		temp = temp->next;
		i++;
	}
	ft_quicksort(arr, 0, size - 1);
	return (arr);
}
