/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 07:58:11 by apregitz          #+#    #+#             */
/*   Updated: 2025/05/15 16:38:48 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	sa(void)
{
	t_data	*data;

	data = get_stacks();
	data->stack_a.tail->num ^= data->stack_a.tail->prev->num;
	data->stack_a.tail->prev->num ^= data->stack_a.tail->num;
	data->stack_a.tail->num ^= data->stack_a.tail->prev->num;
}

void	sb(void)
{
	t_data	*data;

	data = get_stacks();
	data->stack_b.tail->num ^= data->stack_b.tail->prev->num;
	data->stack_b.tail->prev->num ^= data->stack_b.tail->num;
	data->stack_b.tail->num ^= data->stack_b.tail->prev->num;
}

void	ss(void)
{
	sa();
	sb();
}
