/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 10:15:43 by apregitz          #+#    #+#             */
/*   Updated: 2025/05/26 10:15:44 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	parsing(int ac, char **av)
{
	t_data	*data;

	data = get_data();
	data->ac = ac;
	data->av = av;
	if (!valid_input(data))
		ft_exit(1);
	data->words_count = count_numbers(data);
	if (data->words_count < 1)
		ft_exit(1);
	alloc_args(data);
	is_unique(data);
	return (1);
}
