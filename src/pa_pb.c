/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 10:09:31 by apregitz          #+#    #+#             */
/*   Updated: 2025/05/15 11:49:59 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

	void	pa(void)
	{
		t_data	*data;

		data = get_data();
		data->stack_a.tail->next = data->stack_b.tail;
		data->stack_a.tail->next->prev = data->stack_a.tail;
		data->stack_a.tail = data->stack_a.tail->next;
		data->stack_b.tail = data->stack_b.tail->prev;
		data->stack_b.tail->next = NULL;
	}

void	pa(void)
{
	t_data	*data;

	data = get_data();
	data->stack_b.tail->next = data->stack_a.tail;
	data->stack_b.tail->next->prev = data->stack_b.tail;
	data->stack_b.tail = data->stack_b.tail->next;
	data->stack_a.tail = data->stack_a.tail->prev;
	data->stack_a.tail->next = NULL;
}
