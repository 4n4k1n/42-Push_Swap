/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 10:15:43 by apregitz          #+#    #+#             */
/*   Updated: 2025/05/27 13:14:54 by apregitz         ###   ########.fr       */
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
	data->stack_a.size = data->words_count;
	if (data->words_count < 1)
		ft_exit(1);
	alloc_args(data);
	is_unique(data);
	// print_llist(data->stack_a.head);
	// printf("\n\n\n\n\n");
	index_llist(data);
	return (1);
}
