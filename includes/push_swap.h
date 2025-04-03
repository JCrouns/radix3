/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 00:58:37 by jait-chd          #+#    #+#             */
/*   Updated: 2025/03/29 17:35:10 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"
# include <limits.h>
#define I_MAX 2147483647
#define I_MIN -2147483648
typedef struct s_stack
{
    int     *a;
    int     *b;
    int     a_len;
    int     b_len;
} t_stack;

int         count_total_numbers(int argc, char **argv);
char        **collect_numbers(int argc, char **argv, int total);
void        ft_free_split(char **split);
void        check_errors(int nb, char **numbers);
void        check_numbers(int nb, char **numbers);
void        check_doubles(int nb, char **numbers);
void        check_min_max(long nb);
long        ft_atol(char *str);
void        free_stuff(t_stack *stack);
void        sa(int *a, int size);
void        swap(int *stack);
void        ra(int *a, int size);
void        rotate(int *arr, int size);
void        rra(int *a, int size);
void        rev_rot(int *arr, int size);
void        pa(t_stack *stack);
void        pb(t_stack *stack);
void        push_to(int *from, int *to, int len_from, int len_to);
int         pop(int *arr, int size);
void        push(int nb, int *arr, int size);

void        fill_index(int *arr, int size);
int         find_bigest_num_get_pos(int *arr, int size);
int         find_smallest_num_get_pos(int *arr, int size);
int         get_max_bits(int *arr, int size);
int         is_sort(int *arr, int size);

void        sort_two_num(t_stack *stack);
void        sort_three_num(t_stack *stack);
void        sort_four_and_five_num(t_stack *stack);
void        sort_big_num(t_stack *stack);
void        push_smaller(t_stack *stack);
void        find_algo(t_stack *stack);

void        ft_push_swap(int nb, char **numbers);
t_stack     *init_stack(int nb, char **numbers, t_stack *stack);
void        quit_success(t_stack *stack);
void        quit_error(void);

#endif
