/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 00:58:10 by jait-chd          #+#    #+#             */
/*   Updated: 2025/03/31 00:25:31 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	int		total_of_numbers;
	char	**numbers;

	if (argc > 1)
	{
		total_of_numbers = count_total_numbers(argc, argv);
		numbers = collect_numbers(argc, argv, total_of_numbers);
		ft_push_swap(total_of_numbers, numbers);
		if (numbers)
	{
		ft_free_split(numbers);  
	}
	}
	
	return (0);
}
