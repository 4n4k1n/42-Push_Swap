/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 11:52:08 by apregitz          #+#    #+#             */
/*   Updated: 2025/05/15 16:38:39 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ra(void)
{
	t_data	*data;

	data = get_data();
	data->stack_a.head->prev = data->stack_a.tail;
	data->stack_a.tail->next = data->stack_a.head;
	data->stack_a.head = data->stack_a.head->prev;
	data->stack_a.tail = data->stack_a.tail->prev;
	data->stack_a.head->prev = NULL;
	data->stack_a.tail->next = NULL;
}

void	rb(void)
{
	t_data	*data;

	data = get_data();
	data->stack_b.head->prev = data->stack_b.tail;
	data->stack_b.tail->next = data->stack_b.head;
	data->stack_b.head = data->stack_b.head->prev;
	data->stack_b.tail = data->stack_b.tail->prev;
	data->stack_b.head->prev = NULL;
	data->stack_b.tail->next = NULL;
}

void	rr(void)
{
	ra();
	rb();
}
