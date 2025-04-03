/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 00:59:20 by jait-chd          #+#    #+#             */
/*   Updated: 2025/03/30 23:42:41 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	sort_two_num(t_stack *stack)
{
	if (stack->a[0] > stack->a[1])
		sa(stack->a, stack->a_len);
}

void	sort_three_num(t_stack *stack)
{
	int	larger;

	larger = find_bigest_num_get_pos(stack->a, stack->a_len);
	if (larger == 0)
		ra(stack->a, stack->a_len);
	else if (larger == 1)
		rra(stack->a, stack->a_len);
	sort_two_num(stack);
}

void	sort_four_and_five_num(t_stack *stack)
{
	if (stack->a_len == 5)
		push_smaller(stack);
	push_smaller(stack);
	sort_three_num(stack);
	pa(stack);
	pa(stack);
}

void	sort_big_num(t_stack *stack)
{
	int	max_bits;
	int	original_size;

	int (i), (j);
	original_size = stack->a_len;
	fill_index(stack->a, stack->a_len);
	max_bits = get_max_bits(stack->a, stack->a_len);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < original_size)
		{
			if (stack->a_len <= 1)
				break ;
			if (((stack->a[0] >> i) & 1) == 0)
				pb(stack);
			else
				ra(stack->a, stack->a_len);
			j++;
		}
		while (stack->b_len > 0)
			pa(stack);
		i++;
	}
}
