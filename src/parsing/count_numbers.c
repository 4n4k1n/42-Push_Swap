/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hntest2 <hntest2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 12:41:42 by hntest2           #+#    #+#             */
/*   Updated: 2025/05/26 05:24:01 by hntest2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_numbers(t_data *data)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (++i < data->ac)
		count += cwords(data->av[i], ' ');
	return (count);
}
