/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hntest2 <hntest2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 11:52:08 by apregitz          #+#    #+#             */
/*   Updated: 2025/05/26 08:15:10 by hntest2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(void)
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

void	rrb(void)
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

void    rrr(void)
{
    rra();
    rrb();
}
