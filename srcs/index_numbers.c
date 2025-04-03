/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 05:04:39 by jait-chd          #+#    #+#             */
/*   Updated: 2025/03/30 05:04:34 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
/*static void compute_ranks(int *arr, int *ranks, int size)
{
    int i = 0, j;

    while (i < size)
    {
        ranks[i] = 0;
        i++;
    }

    i = 0;
    while (i < size)
    {
        j = 0;
        while (j < size)
        {
            if (arr[j] < arr[i])
                ranks[i]++;
            j++;
        }
        i++;
    }
}

void fill_index(int *arr, int size)
{
    int *ranks;
    int i = 0;

    if (size <= 0)
        return;

    ranks = malloc(sizeof(int) * size);
    if (!ranks)
        quit_error();

    compute_ranks(arr, ranks, size);

    i = 0;
    while (i < size)
    {
        arr[i] = ranks[i];
        i++;
    }

    free(ranks);
}*/
void	fill_index(int *arr, int size)
{
	int *ranks;
	int i;
	int j;

	if (size <= 0)
		return ;
	ranks = malloc(sizeof(int) * size);
	if (!ranks)
		quit_error();
	i = 0;
	while (i < size)
		ranks[i++] = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (arr[j] < arr[i])
				ranks[i]++;
			j++;
		}
		i++;
	}
	i = 0;
	while (i < size)
	{
		arr[i] = ranks[i];
		i++;
	}
	free(ranks);
}
