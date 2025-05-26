/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hntest2 <hntest2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 07:58:11 by apregitz          #+#    #+#             */
/*   Updated: 2025/05/26 08:15:32 by hntest2          ###   ########.fr       */
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
