/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 00:58:37 by jait-chd          #+#    #+#             */
/*   Updated: 2025/03/30 05:03:36 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

t_stack	*init_stack(int nb, char **numbers, t_stack *stack)
{
	int	i;

	stack->a = malloc(sizeof(int) * nb);
	if (!stack->a)
	{
		free(stack);
		quit_error();
	}
	i = 0;
	while (i < nb)
	{
		stack->a[i] = ft_atoi(numbers[i]);
		i++;
	}
	stack->b = malloc(sizeof(int) * nb);
	if (!stack->b)
	{
		free(stack->a);
		free(stack);
		quit_error();
	}
	stack->a_len = nb;
	stack->b_len = 0;
	return (stack);
}
