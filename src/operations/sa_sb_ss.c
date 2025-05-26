/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 10:13:35 by apregitz          #+#    #+#             */
/*   Updated: 2025/05/26 10:13:38 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(void)
{
	t_data	*data;

	data = get_data();
	if (!data->stack_a.head->next)
		return ;
	data->stack_a.head->num ^= data->stack_a.head->next->num;
	data->stack_a.head->next->num ^= data->stack_a.head->num;
	data->stack_a.head->num ^= data->stack_a.head->next->num;
}

void	sb(void)
{
	t_data	*data;

	data = get_data();
	if (!data->stack_b.head->next)
		return ;
	data->stack_b.head->num ^= data->stack_b.head->next->num;
	data->stack_b.head->next->num ^= data->stack_b.head->num;
	data->stack_b.head->num ^= data->stack_b.head->next->num;
}

void	ss(void)
{
	sa();
	sb();
}
