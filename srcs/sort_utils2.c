/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 05:04:32 by jait-chd          #+#    #+#             */
/*   Updated: 2025/03/30 05:04:34 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_sort(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (arr[i] > arr[i + 1])
			return (1);
		i++;
	}
	return (0);
}

int	pop(int *arr, int size)
{
	int	tmp;
	int	i;

	tmp = *arr;
	i = 0;
	while (i < size - 1)
	{
		arr[i] = arr[i + 1];
		i++;
	}
	arr[i] = 0;
	return (tmp);
}

void	push(int nb, int *arr, int size)
{
	while (size > 0)
	{
		arr[size] = arr[size - 1];
		size--;
	}
	arr[0] = nb;
}

void	push_to(int *from, int *to, int len_from, int len_to)
{
	push(pop(from, len_from), to, len_to);
}
