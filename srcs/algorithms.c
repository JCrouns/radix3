/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 05:04:32 by jait-chd          #+#    #+#             */
/*   Updated: 2025/03/30 05:04:34 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	find_algo(t_stack *stack)
{
	if (stack->a_len == 2)
		sort_two_num(stack);
	else if (stack->a_len == 3)
		sort_three_num(stack);
	else if (stack->a_len == 4 || stack->a_len == 5)
		sort_four_and_five_num(stack);
	else
		sort_big_num(stack);
}

void	ft_push_swap(int nb, char **numbers)
{
	t_stack	*stack;

	check_errors(nb, numbers);
	if (nb > 1)
	{
		stack = ft_calloc(1, sizeof(t_stack));
		if (!stack) 
		{
			free_stuff(stack);
			quit_error();
		}
		init_stack(nb, numbers, stack);
		if (is_sort(stack->a, stack->a_len))
			find_algo(stack);
		quit_success(stack);
	}
}
