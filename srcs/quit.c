/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 00:51:19 by jait-chd          #+#    #+#             */
/*   Updated: 2025/03/30 05:04:03 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	quit_success(t_stack *stack)
{
	free(stack->a);
	free(stack->b);
	free(stack);
	exit(0);
}
void free_stuff(t_stack *stack) {
	free(stack->a);
	free(stack->b);
	free(stack);
}

void	quit_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(EXIT_FAILURE);
}
