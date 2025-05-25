/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hntest2 <hntest2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 10:09:31 by apregitz          #+#    #+#             */
/*   Updated: 2025/05/25 15:39:22 by hntest2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(void)
{
	t_data	*data;

	data = get_data();
	data->stack_a.head->prev = data->stack_b.head;
	data->stack_b.head = data->stack_b.head->next;
	data->stack_a.head->prev->next = data->stack_a.head;
	data->stack_a.head = data->stack_a.head->prev;
	data->stack_a.head->prev = NULL;
	data->stack_b.head->prev = NULL;
}

void	pb(void)
{
	t_data	*data;

	data = get_data();
	data->stack_b.head->prev = data->stack_a.head;
	data->stack_a.head = data->stack_a.head->next;
	data->stack_b.head->prev->next = data->stack_b.head;
	data->stack_b.head = data->stack_b.head->prev;
	data->stack_b.head->prev = NULL;
	data->stack_a.head->prev = NULL;
}
