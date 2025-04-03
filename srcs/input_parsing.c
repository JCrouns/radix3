/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 00:58:48 by jait-chd          #+#    #+#             */
/*   Updated: 2025/03/31 00:18:43 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

long	ft_atol(char *str)
{
	long	nb;
	int		sign;

	nb = 0;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + *str - '0';
		if(nb * sign > 2147483647)
			quit_error();
		else if(nb * sign < -2147483648)
			quit_error();	
		str++;
	}
	return (nb * sign);
}

void	check_numbers(int nb, char **numbers)
{
	char	*str;
	int		i;

	i = 0;
	while (i < nb)
	{
		str = numbers[i];
		if (*str == '-' || *str == '+')
			str++;
		if (*str == '\0')
			quit_error();
		while (*str)
		{
			if (!(*str >= '0' && *str <= '9'))
				quit_error();
			str++;
		}
		ft_atol(numbers[i]);
		i++;
	}
}

void	check_doubles(int nb, char **numbers)
{
	int	i;
	int	j;

	i = 0;
	while (++i < nb)
	{
		j = -1;
		while (++j < i)
		{
			if (ft_atoi(numbers[i]) == ft_atoi(numbers[j]))
				quit_error();
		}
	}
}

void	check_errors(int nb, char **numbers)
{
	check_numbers(nb, numbers);
	check_doubles(nb, numbers);
}
