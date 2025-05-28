/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 05:51:11 by hntest2           #+#    #+#             */
/*   Updated: 2025/05/27 18:01:11 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <math.h>

static int push_to_stack_b(t_data *data)
{
	int	count;

	count = 0;
	data->range = sqrt(data->stack_a.size) * 1.6;
	while (data->stack_a.size)
	{
		if (data->stack_a.head->num <= count)
		{
			pb();
			rb();
			count++;
		}
		else if (data->stack_a.head->num < count + data->range)
		{
			pb();
			count++;
		}
		else
			ra();
	}
	return (1);
}

void	logic(void)
{
	t_data	*data;

	data = get_data();
	push_to_stack_b(data);
}
