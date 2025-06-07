/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 11:52:08 by apregitz          #+#    #+#             */
/*   Updated: 2025/06/07 10:58:49 by apregitz         ###   ########.fr       */
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
	if (!data->is_checker && !data->both)
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
	if (!data->is_checker && !data->both)
		ft_printf("rb\n");
}

void	rr(void)
{
	t_data	*data;

	data = get_data();
	data->both = 1;
	ra();
	rb();
	data->both = 0;
	if (!data->is_checker)
		ft_printf("rr\n");
}