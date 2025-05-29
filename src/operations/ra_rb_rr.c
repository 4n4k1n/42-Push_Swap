/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 11:52:08 by apregitz          #+#    #+#             */
/*   Updated: 2025/05/29 11:19:43 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(void)
{
	t_data	*data;

	data = get_data();
	if (!data->stack_a.head || !data->stack_a.head->next)
		return;
	data->stack_a.head->prev = data->stack_a.tail;
	data->stack_a.tail->next = data->stack_a.head;
	data->stack_a.head = data->stack_a.head->next;
	data->stack_a.tail = data->stack_a.tail->next;
	data->stack_a.head->prev = NULL;
	data->stack_a.tail->next = NULL;
	if (!data->is_checker)
		ft_printf("ra\n");
}

void	rb(void)
{
	t_data	*data;

	data = get_data();
	if (!data->stack_b.head || !data->stack_b.head->next)
		return;
	data->stack_b.head->prev = data->stack_b.tail;
	data->stack_b.tail->next = data->stack_b.head;
	data->stack_b.head = data->stack_b.head->next;
	data->stack_b.tail = data->stack_b.tail->next;
	data->stack_b.head->prev = NULL;
	data->stack_b.tail->next = NULL;
	if (!data->is_checker)
		ft_printf("rb\n");
}

void	rr(void)
{
	t_data	*data;

	data = get_data();
	ra();
	rb();
	if (!data->is_checker)
		ft_printf("rr\n");
}