/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 00:58:37 by jait-chd          #+#    #+#             */
/*   Updated: 2025/03/31 00:17:29 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	rotate(int *arr, int size)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = *arr;
	while (i < size - 1)
	{
		arr[i] = arr[i + 1];
		i++;
	}
	arr[i] = tmp;
}

void	swap(int *stack)
{
	int	tmp;

	tmp = *stack;
	*stack = stack[1];
	stack[1] = tmp;
}

void	rev_rot(int *arr, int size)
{
	int	i;
	int	tmp;

	i = size - 1;
	tmp = arr[i];
	while (i > 0)
	{
		arr[i] = arr[i - 1];
		i--;
	}
	arr[i] = tmp;
}
