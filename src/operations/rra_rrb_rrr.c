/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 10:13:44 by apregitz          #+#    #+#             */
/*   Updated: 2025/05/28 10:03:07 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(void)
{
	t_data	*data;

	data = get_data();
	if (!data->stack_a.head || !data->stack_a.head->next)
		return;
	data->stack_a.head->prev = data->stack_a.tail;
	data->stack_a.tail->next = data->stack_a.head;
	data->stack_a.head = data->stack_a.head->prev;
	data->stack_a.tail = data->stack_a.tail->prev;
	data->stack_a.head->prev = NULL;
	data->stack_a.tail->next = NULL;
	ft_printf("rra\n");
}

void	rrb(void)
{
	t_data	*data;

	data = get_data();
	if (!data->stack_b.head || !data->stack_b.head->next)
		return;
	data->stack_b.head->prev = data->stack_b.tail;
	data->stack_b.tail->next = data->stack_b.head;
	data->stack_b.head = data->stack_b.head->prev;
	data->stack_b.tail = data->stack_b.tail->prev;
	data->stack_b.head->prev = NULL;
	data->stack_b.tail->next = NULL;
	ft_printf("rrb\n");
}

void	rrr(void)
{
	rra();
	rrb();
	ft_printf("rrr\n");
}