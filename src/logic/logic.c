/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hntest2 <hntest2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 05:51:11 by hntest2           #+#    #+#             */
/*   Updated: 2025/05/26 07:35:17 by hntest2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int push_to_stack_b(t_data *data)
{
	int	count;

	count = 0;
	data->range = ft_sqrt(data->stack_a.size) * 1.6;
	while (data->stack_a.size)
	{
		if (data->stack_a.head <= count)
		{
			pb();
			rb();
			count++;
		}
		else if (data->stack_a.head < count + data->range)
		{
			pb();
			count++;
		}
		else
			ra();
	}
}

int push_to_stack_a(t_data *data)
{
    
}

void	logic(void)
{
	t_data	*data;

	data = get_data();
	push_to_stack_a(data);
}
