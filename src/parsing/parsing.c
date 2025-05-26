/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hntest2 <hntest2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 13:02:15 by hntest2           #+#    #+#             */
/*   Updated: 2025/05/26 05:35:07 by hntest2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int parsing(int ac, char **av)
{
    t_data  *data;

    data = get_data();
    data->ac = ac;
    data->av = av;
    if (!valid_input(data))
        ft_exit(1);
    data->words_count = count_numbers(data);
    if (data->words_count < 1)
        ft_exit(1);
    alloc_args(data);
    return (1);
}
