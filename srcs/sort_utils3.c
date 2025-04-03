/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 00:58:37 by jait-chd          #+#    #+#             */
/*   Updated: 2025/03/31 00:27:52 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

int	find_smallest_num_get_pos(int *arr, int size)
{
	int	i;
	int	smallest_num;
	int	pos;

	i = 0;
	smallest_num = arr[0];
	pos = 0;
	while (i < size)
	{
		if (arr[i] < smallest_num)
		{
			pos = i;
			smallest_num = arr[i];
		}
		i++;
	}
	return (pos);
}

int	find_bigest_num_get_pos(int *arr, int size)
{
	int	i;
	int	bigest_number;
	int	pos;

	i = 0;
	bigest_number = arr[0];
	pos = 0;
	while (i < size)
	{
		if (arr[i] > bigest_number)
		{
			pos = i;
			bigest_number = arr[i];
		}
		i++;
	}
	return (pos);
}

void	push_smaller(t_stack *stack)
{
	int	smaller;

	smaller = find_smallest_num_get_pos(stack->a, stack->a_len);
	if (smaller == 1)
		sa(stack->a, stack->a_len);
	else if (smaller == 2)
	{
		rra(stack->a, stack->a_len);
		rra(stack->a, stack->a_len);
	}
	else if (smaller == 3)
		rra(stack->a, stack->a_len);
	if ((smaller == 2 || smaller == 3 || smaller == 4) && stack->a_len == 5)
		rra(stack->a, stack->a_len);
	pb(stack);
}

int	get_max_bits(int *arr, int size)
{
	int	max;
	int	max_bits;
	int	i;

	max = arr[0];
	max_bits = 0;
	i = 1;
	while (i < size)
	{
		if (arr[i] > max)
			max = arr[i];
		i++;
	}
	while (max >> max_bits)
		max_bits++;
	return (max_bits);
}
