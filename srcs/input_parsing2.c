/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parsing2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 00:58:22 by jait-chd          #+#    #+#             */
/*   Updated: 2025/03/30 05:03:36 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

int	count_total_numbers(int argc, char **argv)
{
	int		i;
	int		total;
	char	**split;
	int		j;

	i = 1;
	total = 0;
	while (i < argc)
	{
		split = ft_split(argv[i], ' ');
		j = 0;
		while (split[j])
			j++;
		total += j;
		ft_free_split(split);
		i++;
	}
	return (total);
}

char	**collect_numbers(int argc, char **argv, int total)
{
	char	**numbers;
	int		i;
	int		k;
	char	**split;
	int		j;

	i = 1;
	k = 0;
	numbers = malloc(sizeof(char *) * (total + 1));
	if (!numbers)
		quit_error();
	while (i < argc)
	{
		split = ft_split(argv[i], ' ');
		if(!split || !*split)
			quit_error();
		j = 0;
		while (split[j])
			numbers[k++] = ft_strdup(split[j++]);	
		ft_free_split(split);
		i++;
	}
	numbers[k] = NULL;
	return (numbers);
}

void	ft_free_split(char **split)
{
	int	i;

	if (!split)
		return ;
	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}
