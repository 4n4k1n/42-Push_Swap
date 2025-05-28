/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 10:13:35 by apregitz          #+#    #+#             */
/*   Updated: 2025/05/28 10:03:17 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(void)
{
	t_data	*data;

	data = get_data();
	if (!data->stack_a.head || !data->stack_a.head->next)
		return ;
	data->stack_a.head->num ^= data->stack_a.head->next->num;
	data->stack_a.head->next->num ^= data->stack_a.head->num;
	data->stack_a.head->num ^= data->stack_a.head->next->num;
	ft_printf("sa\n");
}

void	sb(void)
{
	t_data	*data;

	data = get_data();
	if (!data->stack_b.head || !data->stack_b.head->next)
		return ;
	data->stack_b.head->num ^= data->stack_b.head->next->num;
	data->stack_b.head->next->num ^= data->stack_b.head->num;
	data->stack_b.head->num ^= data->stack_b.head->next->num;
	ft_printf("sb\n");
}

void	ss(void)
{
	sa();
	sb();
	ft_printf("ss\n");
}