/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 00:53:16 by jait-chd          #+#    #+#             */
/*   Updated: 2025/03/30 05:03:53 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	sa(int *a, int size)
{
	if (size > 1)
	{
		swap(a);
		ft_putstr_fd("sa\n", 1);
	}
}

void	ra(int *a, int size)
{
	if (size > 1)
	{
		rotate(a, size);
		ft_putstr_fd("ra\n", 1);
	}
}

void	rra(int *a, int size)
{
	if (size > 1)
	{
		rev_rot(a, size);
		ft_putstr_fd("rra\n", 1);
	}
}

void	pa(t_stack *stack)
{
	if (stack->b_len > 0)
	{
		push_to(stack->b, stack->a, stack->b_len, stack->a_len);
		stack->b_len--;
		stack->a_len++;
		ft_putstr_fd("pa\n", 1);
	}
}

void	pb(t_stack *stack)
{
	if (stack->a_len > 0)
	{
		push_to(stack->a, stack->b, stack->a_len, stack->b_len);
		stack->a_len--;
		stack->b_len++;
		ft_putstr_fd("pb\n", 1);
	}
}
